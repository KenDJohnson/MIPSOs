#include "mipsregs.h"


/* JZ4780 USB Bootloader */

.globl _start
.ent _start
.text

_start:
	move 	t0, ra 			// save sp and ra
	move 	t1, sp
	li 		sp, 0xf4004000  // init new stack
	jal 	entrypoint     
	move 	sp, t1
	move 	ra, t0
	
	j ra
.end _start


.globl entrypoint
.ent entrypoint

entrypoint:
	addi 	sp, sp, -4
	lw 		ra, 0(sp)
	/* 	init the ci20 board. Enable the UART 4 GPIOs. */
	li 		t1, PIN_UART4_TXD
	ori 	t1, PIN_UART4_RXD

