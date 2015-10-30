/* 	uart.h
	Ken Johnson
	10/28/2015

	Header file for using the UART interface of the JZ4780, for use with the  
	MIPS Creator CI20. Details can be found	 in the JZ4780 Programmers Manual
	Chapter 31 (register mapping is on page 694) */

/* Setting Baudrate */
#define DEBUG_UART_BPS 		115200
#define EXTCLK 				48000000
#define DEBUG_UART_DIVISOR  (EXTCLK / 16 / DEBUG_UART_BPS)

/* UART0 */
#define UART0_BASE 		0xb0030000
#define UART0_URBR 		(UART0_BASE + 0x0)  /* Receive Buffer Register 	  |R  */
#define UART0_UTHR 		(UART0_BASE + 0x0)  /* Transmit Hold Register 	  | W */
#define UART0_UDLLR 	(UART0_BASE + 0x0) 	/* Divisor Latch Low Register |RW */
#define UART0_UDLHR 	(UART0_BASE + 0x4) 	/* Divisor Latch High Reg 	  |RW */
#define UART0_UIER 		(UART0_BASE + 0x4) 	/* Interrupt Enable Register  |RW */
#define UART0_UIIR 		(UART0_BASE + 0x8) 	/* Interrupt ID Register 	  |R  */
#define UART0_UFCR 		(UART0_BASE + 0x8) 	/* FIFO Control Register 	  | W */
#define UART0_ULCR 		(UART0_BASE + 0x0c) /* Line Control Register 	  |RW */
#define UART0_UMCR 		(UART0_BASE + 0x10) /* Modem Control Register 	  |RW */
#define UART0_ULSR 		(UART0_BASE + 0x14) /* Line Status Register 	  |R  */
#define UART0_UMSR 		(UART0_BASE + 0x18) /* Modem Status Register 	  |R  */
#define UART0_USPR 		(UART0_BASE + 0x1c) /* UART Scratchpad Register   |RW */
#define UART0_ISR 		(UART0_BASE + 0x20) /* Infared Selection Register |RW */
#define UART0_UMR 		(UART0_BASE + 0x24) /* M Register 				  |RW */
#define UART0_UACR 		(UART0_BASE + 0x28) /* Add Cycle Register 		  |R  */
#define UART0_URCR 		(UART0_BASE + 0x40) /* RXFIFO Counter Register 	  |R  */
#define UART0_UTCR 		(UART0_BASE + 0x44) /* TXFIFO Counter Register 	  |R  */


/* UART1 */
#define UART1_BASE 		0xb0031000
#define UART1_URBR 		(UART1_BASE + 0x0)  /* Receive Buffer Register 	  |R  */
#define UART1_UTHR 		(UART1_BASE + 0x0)  /* Transmit Hold Register 	  | W */
#define UART1_UDLLR 	(UART1_BASE + 0x0) 	/* Divisor Latch Low Register |RW */
#define UART1_UDLHR 	(UART1_BASE + 0x4) 	/* Divisor Latch High Reg 	  |RW */
#define UART1_UIER 		(UART1_BASE + 0x4) 	/* Interrupt Enable Register  |RW */
#define UART1_UIIR 		(UART1_BASE + 0x8) 	/* Interrupt ID Register 	  |R  */
#define UART1_UFCR 		(UART1_BASE + 0x8) 	/* FIFO Control Register 	  | W */
#define UART1_ULCR 		(UART1_BASE + 0x0c) /* Line Control Register 	  |RW */
#define UART1_UMCR 		(UART1_BASE + 0x10) /* Modem Control Register 	  |RW */
#define UART1_ULSR 		(UART1_BASE + 0x14) /* Line Status Register 	  |R  */
#define UART1_UMSR 		(UART1_BASE + 0x18) /* Modem Status Register 	  |R  */
#define UART1_USPR 		(UART1_BASE + 0x1c) /* UART Scratchpad Register   |RW */
#define UART1_ISR 		(UART1_BASE + 0x20) /* Infared Selection Register |RW */
#define UART1_UMR 		(UART1_BASE + 0x24) /* M Register 				  |RW */
#define UART1_UACR 		(UART1_BASE + 0x28) /* Add Cycle Register 		  |R  */
#define UART1_URCR 		(UART1_BASE + 0x40) /* RXFIFO Counter Register 	  |R  */
#define UART1_UTCR 		(UART1_BASE + 0x44) /* TXFIFO Counter Register 	  |R  */


/* UART2 */
#define UART2_BASE 		0xb0032000
#define UART2_URBR 		(UART2_BASE + 0x0)  /* Receive Buffer Register 	  |R  */
#define UART2_UTHR 		(UART2_BASE + 0x0)  /* Transmit Hold Register 	  | W */
#define UART2_UDLLR 	(UART2_BASE + 0x0) 	/* Divisor Latch Low Register |RW */
#define UART2_UDLHR 	(UART2_BASE + 0x4) 	/* Divisor Latch High Reg 	  |RW */
#define UART2_UIER 		(UART2_BASE + 0x4) 	/* Interrupt Enable Register  |RW */
#define UART2_UIIR 		(UART2_BASE + 0x8) 	/* Interrupt ID Register 	  |R  */
#define UART2_UFCR 		(UART2_BASE + 0x8) 	/* FIFO Control Register 	  | W */
#define UART2_ULCR 		(UART2_BASE + 0x0c) /* Line Control Register 	  |RW */
#define UART2_UMCR 		(UART2_BASE + 0x10) /* Modem Control Register 	  |RW */
#define UART2_ULSR 		(UART2_BASE + 0x14) /* Line Status Register 	  |R  */
#define UART2_UMSR 		(UART2_BASE + 0x18) /* Modem Status Register 	  |R  */
#define UART2_USPR 		(UART2_BASE + 0x1c) /* UART Scratchpad Register   |RW */
#define UART2_ISR 		(UART2_BASE + 0x20) /* Infared Selection Register |RW */
#define UART2_UMR 		(UART2_BASE + 0x24) /* M Register 				  |RW */
#define UART2_UACR 		(UART2_BASE + 0x28) /* Add Cycle Register 		  |R  */
#define UART2_URCR 		(UART2_BASE + 0x40) /* RXFIFO Counter Register 	  |R  */
#define UART2_UTCR 		(UART2_BASE + 0x44) /* TXFIFO Counter Register 	  |R  */


/* UART3 */
#define UART3_BASE 		0xb0033000
#define UART3_URBR 		(UART3_BASE + 0x0)  /* Receive Buffer Register 	  |R  */
#define UART3_UTHR 		(UART3_BASE + 0x0)  /* Transmit Hold Register 	  | W */
#define UART3_UDLLR 	(UART3_BASE + 0x0) 	/* Divisor Latch Low Register |RW */
#define UART3_UDLHR 	(UART3_BASE + 0x4) 	/* Divisor Latch High Reg 	  |RW */
#define UART3_UIER 		(UART3_BASE + 0x4) 	/* Interrupt Enable Register  |RW */
#define UART3_UIIR 		(UART3_BASE + 0x8) 	/* Interrupt ID Register 	  |R  */
#define UART3_UFCR 		(UART3_BASE + 0x8) 	/* FIFO Control Register 	  | W */
#define UART3_ULCR 		(UART3_BASE + 0x0c) /* Line Control Register 	  |RW */
#define UART3_UMCR 		(UART3_BASE + 0x10) /* Modem Control Register 	  |RW */
#define UART3_ULSR 		(UART3_BASE + 0x14) /* Line Status Register 	  |R  */
#define UART3_UMSR 		(UART3_BASE + 0x18) /* Modem Status Register 	  |R  */
#define UART3_USPR 		(UART3_BASE + 0x1c) /* UART Scratchpad Register   |RW */
#define UART3_ISR 		(UART3_BASE + 0x20) /* Infared Selection Register |RW */
#define UART3_UMR 		(UART3_BASE + 0x24) /* M Register 				  |RW */
#define UART3_UACR 		(UART3_BASE + 0x28) /* Add Cycle Register 		  |R  */
#define UART3_URCR 		(UART3_BASE + 0x40) /* RXFIFO Counter Register 	  |R  */
#define UART3_UTCR 		(UART3_BASE + 0x44) /* TXFIFO Counter Register 	  |R  */


/* UART4 */
#define UART4_BASE 		0xb0034000
#define UART4_URBR 		(UART4_BASE + 0x0)  /* Receive Buffer Register 	  |R  */
#define UART4_UTHR 		(UART4_BASE + 0x0)  /* Transmit Hold Register 	  | W */
#define UART4_UDLLR 	(UART4_BASE + 0x0) 	/* Divisor Latch Low Register |RW */
#define UART4_UDLHR 	(UART4_BASE + 0x4) 	/* Divisor Latch High Reg 	  |RW */
#define UART4_UIER 		(UART4_BASE + 0x4) 	/* Interrupt Enable Register  |RW */
#define UART4_UIIR 		(UART4_BASE + 0x8) 	/* Interrupt ID Register 	  |R  */
#define UART4_UFCR 		(UART4_BASE + 0x8) 	/* FIFO Control Register 	  | W */
#define UART4_ULCR 		(UART4_BASE + 0x0c) /* Line Control Register 	  |RW */
#define UART4_UMCR 		(UART4_BASE + 0x10) /* Modem Control Register 	  |RW */
#define UART4_ULSR 		(UART4_BASE + 0x14) /* Line Status Register 	  |R  */
#define UART4_UMSR 		(UART4_BASE + 0x18) /* Modem Status Register 	  |R  */
#define UART4_USPR 		(UART4_BASE + 0x1c) /* UART Scratchpad Register   |RW */
#define UART4_ISR 		(UART4_BASE + 0x20) /* Infared Selection Register |RW */
#define UART4_UMR 		(UART4_BASE + 0x24) /* M Register 				  |RW */
#define UART4_UACR 		(UART4_BASE + 0x28) /* Add Cycle Register 		  |R  */
#define UART4_URCR 		(UART4_BASE + 0x40) /* RXFIFO Counter Register 	  |R  */
#define UART4_UTCR 		(UART4_BASE + 0x44) /* TXFIFO Counter Register 	  |R  */

/* UART value definitions */
#define UART_ULCR_DLAB  (1 << 7) /* Divisor latch access */
#define UART_ULCR_SBK   (1 << 6) /* Set break */
#define UART_ULCR_STPAR (1 << 5) /* Stick parity*/
#define UART_ULCR_PARM  (1 << 4) /* 1 = even parity, 0 = odd parity */
#define UART_ULCR_PARE  (1 << 3) /* Parity enable */
#define UART_ULCR_SBLS  (1 << 2) /* 0 = 1 stop bit, 1 = 2 stop bits */
#define UART_ULCR_WLS_5 (0) /* 5-bit words */
#define UART_ULCR_WLS_6 (1) /* 6-bit words */
#define UART_ULCR_WLS_7 (2) /* 7-bit words */
#define UART_ULCR_WLS_8 (3) /* 8-bit words */

#define UART_UMCR_MDCE (1 << 7) /* Modem control enable */
#define UART_UMCR_FCM  (1 << 6) /* 1 = hardware, 0 = software */
#define UART_UMCR_LOOP (1 << 4) /* Loopback testing mode */
#define UART_UMCR_RTS  (1 << 1) /* RTS */

#define UART_UFCR_RTDR_1  (0 << 6)
#define UART_UFCR_RTDR_16 (1 << 6)
#define UART_UFCR_RTDR_32 (2 << 6)
#define UART_UFCR_RTDR_60 (3 << 6)
#define UART_UFCR_UME     (1 << 4) /* Enable the UART */
#define UART_UFCR_DMR     (1 << 3) /* DMA enable */
#define UART_UFCR_TFRT    (1 << 2) /* Transmit holding register reset */
#define UART_UFCR_RFRT    (1 << 1) /* Receive buffer reset */
#define UART_UFCR_FME     (1 << 0) /* FIFO mode enable */

#define UART_ULSR_FIFOE (1 << 7) /* FIFO Error Status. (FIFO mode only) */
#define UART_ULSR_TEMP  (1 << 6) /* Transmit Holding Register Empty. */
#define UART_ULSR_TDRQ  (1 << 5) /* Transmit Data Request. */
#define UART_ULSR_BI    (1 << 4) /* Break Interrupt. */
#define UART_ULSR_FMER  (1 << 3) /* Framing Error. */
#define UART_ULSR_PARER (1 << 2) /* Parity Error. */
#define UART_ULSR_OVER  (1 << 1) /* Overrun Error. */
#define UART_ULSR_DRY   (1 << 0) /* Data Ready. */
