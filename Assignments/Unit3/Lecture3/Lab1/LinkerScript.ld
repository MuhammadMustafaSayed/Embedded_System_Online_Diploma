ENTRY(reset)
MEMORY
{
	Memory(RWX):ORIGIN = 0x00000000 , LENGTH = 64M
}
SECTIONS
{
	. = 0x10000;
	.startup . :
	{
		startup.o(.text) 
	}> Memory
	.text :
	{
		*(.text) *(.rodata)
	}> Memory

	.data :
	{
		*(.data)
	}> Memory

	.bss  :
	{
		*(.bss) *(COMMON)
	}> Memory
	. = . + 0x1000;
	stack_top = . ;
}




