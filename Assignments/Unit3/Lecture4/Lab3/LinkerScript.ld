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
	  _E_text = .;
	}>Flash

	.data :{
	  _S_data = .;
	  *(.data*)
	  _E_data = .;
	}>Sram AT> Flash

	.bss :{
	  _S_bss = . ;
	  *(.bss*)
	  _E_bss = .;
	  _stack_top = . +0x1000;
	}>Sram
}


