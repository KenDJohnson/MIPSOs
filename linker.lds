OUTPUT_ARCH(mips)

ENTRY(_start)

SECTIONS
{
	/* base address */
	. = 0xa8000000;

	/* code */
	.text : {
		*(.text)
	}

	/* Static data */
	.rodata : {
		*(.rodata)
		*(.rodata.*)
	}
	/* non-static data */
	.data : {
		*(.data*)
	}
}
