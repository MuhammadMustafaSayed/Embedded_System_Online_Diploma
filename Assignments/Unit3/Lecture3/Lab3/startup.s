/*SRAM 0x20001000 */
.section .vectors
.word 0x20001000		/* Stack top address */
.word _reset			/* 1 Reset */
.word Vector_handler	/* 2 Hard Fault */
.word Vector_handler	/* 3 MM Fault */
.word Vector_handler	/* 4 Bus Fault */	
.word Vector_handler	/* 5 Usage Fault */
.word Vector_handler	/* 6 Reserved */
.word Vector_handler	/* 7 Reserved */
.word Vector_handler	/* 8 Reserved */
.word Vector_handler	/* 9 Reserved */
.word Vector_handler	/* 10 Reserved */
.word Vector_handler	/* 11 SV call */
.word Vector_handler	/* 12 Debug reserved */
.word Vector_handler	/* 13 Reserved */
.word Vector_handler	/* 14 PendSV */
.word Vector_handler	/* 15 Systick */
.word Vector_handler	/* 16 IRQ0 */
.word Vector_handler	/* 17 IRQ1 */
.word Vector_handler	/* 18 IRQ2 */



.section .text
_reset:
		bl main
		b .


Vector_handler:
	b _reset