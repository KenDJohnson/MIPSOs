#include "mipsregs.h"
#include "gpio.h"
#include "uart.h"
#include "ci20board.h"


/* JZ4780 USB Bootloader: Simple Hello World over UART */

.data
uart_enabled: 		.asciiz "UART4 Enabled"
.text
.globl _start
.ent _start

_start:
	move 	t0, ra 			// save sp and ra
	move 	t1, sp
	li 		sp, 0xf4004000  // init new stack
	jal 	entrypoint     
	la 		a0, uart_enabled
	jal 	debug_uart_puts_line
	move 	sp, t1
	move 	ra, t0
	
	j ra
.end _start


.globl entrypoint
.ent entrypoint

entrypoint:
	addi 	sp, sp, -4
	sw 		ra, 0(sp)
	/* 	init the ci20 board. Enable the UART 4 Pins. */
	/* 	Set RXD bits of PORT C Interrupt Clear Register, meaning they
	 	used as GPIO or device function not interrupts */
	li 		t1, PIN_UART4_TXD
	li 		t3, PIN_UART4_RXD
	or  	t1, t1, t3
	li 		t2, PCINTC
	sw 		t1, 0(t2) 
	/* 	Clear the UART4_T/RXD bits of PORT C Mask Register, meaning they will
		be used for device function, not GPIO */
	li 		t2, PCMSKC
	sw 		t1, 0(t2)
	/* 	Set UART4_T/RXD bits of PORT C Pattern 1 Set Register, to specify that 
		it will use device 2 or 3 , rather than unset which is 0 or 1 */
	li 		t2, PCPAT1S
	sw 		t1, 0(t2)
	/* 	Clear UART4_T/RXD bits of PORT C Pattern 1 Clear Register to specify 
		it will use device 2 rather than 3 */
	li 		t2, PCPAT0C
	sw 		t1, 0(t2)
	/* 	Enable the UART4 clock. UARTs are clocked from EXTCLK: no PLL required.
		First get the current state of Clock Gate Register 1 and and it with 
		the new value. Then set the new value. */
	li 		t2, CPM_CLKGR1
	lw 		t1, 0(t2)
	li 		t3, CPM_CLKGR1_UART4
	li 		t4, 0xffffffff
	xor 	t3, t3, t4
	and 	t1, t1, t3
	sw 		t1, 0(t2)
	/* 	Now that the GPIO pins are set up to communicate with UART we need to 
		enable the communication for debugging */

	/* Diable UART4 interrupts */
	li 		t1, 0
	li 		t2, UART4_UIER
	sw 		t1, 0(t2)
	/* Modem control: RTS force Request To Send to low */
	li 		t1, UART_UMCR_RTS
	li 		t2, UART4_UMCR
	sw 		t1, 0(t2)
	/* Enable FIFO, reset rx and tx, and enable the module */
	li 		t1, UART_UFCR_FME 		/* FIFO mode enable */
	ori 	t1, t1, UART_UFCR_TFRT  /* Transmist Holding Register Reset */
	ori 	t1, t1, UART_UFCR_RFRT  /* Receive Buffer Reset */
	ori 	t1, t1, UART_UFCR_UME 	/* UART Module Enable */
	li 		t2, UART4_UFCR
	sw 		t1, 0(t2)
	/* 	UCLR: UART Line Control Register - defines the format for UART data
		transmission. */
	/* Enable banking and set the baudrate */
	li 		t1, UART_ULCR_DLAB 		/* Divisor Latch Access Bit */
	ori 	t1, t1, UART_ULCR_WLS_8 /* Set to 8-bit character */
	li 		t2, UART4_ULCR
	sw 		t1, 0(t2)
	li 		t1, DEBUG_UART_DIVISOR
	andi 	t1, t1, 0xff
	li 		t2, UART4_UDLLR
	sw 		t1, 0(t2)
	li 		t1, DEBUG_UART_DIVISOR
	andi 	t1, t1, 0xff00
	srl 	t1, t1, 8
	li 		t2, UART4_UDLHR
	sw 		t1, 0(t2)
	
	/* Disable banking again */
	li 		t1, UART_ULCR_WLS_8
	li 		t2, UART4_ULCR
	sw 		t1, 0(t2)

	lw 		ra, 0(sp)
	addi 	sp, sp, 4
	jr 		ra
.end entrypoint
	
.globl debug_uart_puts
.ent debug_uart_puts
debug_uart_puts:
	addi 	sp, sp, -12
	sw 		ra, 0(sp)
	sw 		s0, 4(sp)
	sw 		s1, 8(sp)
	move 	s1, a0
putsloop:
	lb 		s2, 0(s1)
	beq 	s2, zero, endputsloop
	move 	a0, s2
	jal 	debug_uart_putc
	addi 	s1, s1, 1
	j 		putsloop
endputsloop: 
	lw 		s1, 8(sp)
	lw 		s0, 4(sp)
	lw 		ra, 0(sp)
	addi 	sp, sp, 12
	jr 		ra
.end debug_uart_puts



.globl debug_uart_puts_line
.ent debug_uart_puts_line
debug_uart_puts_line:
	addi 	sp, sp, -12
	sw 		ra, 0(sp)
	sw 		s0, 4(sp)
	sw 		s1, 8(sp)
	move 	s1, a0
putslnloop:
	lb 		s2, 0(s1)
	beq 	s2, zero, endputslnloop
	move 	a0, s2
	jal 	debug_uart_putc
	addi 	s1, s1, 1
	j 		putslnloop
endputslnloop: 
	li 		a0, 0xd
	jal 	debug_uart_putc
	li 		a0, 0xa
	jal 	debug_uart_putc
	lw 		s1, 8(sp)
	lw 		s0, 4(sp)
	lw 		ra, 0(sp)
	addi 	sp, sp, 12
	jr 		ra
.end debug_uart_puts_line

.globl debug_uart_putc
.ent debug_uart_putc
debug_uart_putc:
	move 	t1, a0
wait_tx:
	li 		t2, UART4_ULSR
	lw 		t2, 0(t2)
	andi 	t2, t2, UART_ULSR_TDRQ
	beq 	t2, zero, wait_tx
	li 		t2, UART4_UTHR
	sb 		t1, 0(t2)
	jr 		ra
.end debug_uart_putc
