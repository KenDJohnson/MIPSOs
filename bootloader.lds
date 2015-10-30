OUTPUT_ARCH(mips)

ENTRY(_start)

SECTIONS
{
	/* Base address */
	. = 0xf4000000;

	/* Code */
	.text : 
	{
		*(.text)
	}
	
	/* Static data */
	.rodata : 
	{
		*(.rodata)
		*(.rodata.*)
	}
	
	/* non-static data */
	.data : 
	{
		*(.data*)
	}
}
