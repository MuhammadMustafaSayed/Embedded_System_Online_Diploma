ENTRY(reset)
MEMORY
{
Flash (RX) : ORIGIN = 0x08000000, LENGTH = 128k
Sram (RWX) : ORIGIN = 0x20000000, LENGTH = 20k
}

SECTIONS
{
	.text : {
			*(.vectors*)
			*(.text*)
			*(.rodata)
	}>Flash
	
	
	
	.data : {
			*(.data)
	}>Flash
	
	
	
	.bss : {
			*(.bss)
	}>Sram
	
}



