/*
 * fw_irq15.c
 *
 *  Created on: 26/04/2013
 *      Author: celso
 */

#include "fw_config.h"

void fw_irq15_init(void){
	//For IRQ15

	ICU.IER[9].BIT.IEN7 = 0; //Disable Interrupt Request IER
	PORT0.DDR.BIT.B7 = 0; //Set P07 by input
	PORT0.ICR.BIT.B7 = 1; //Enable P07 buffer

	IOPORT.PF8IRQ.BIT.ITS15 = 0; //Select IRQ15-A pin

	/*
	 * Select operation mode of the IRQ (IRQMD)
	 * 0 -> low level
	 * 1 -> Falling edge
	 * 2 -> Rising edge
	 * 3 -> Rising and Falling edge
	 */
	ICU.IRQCR[15].BIT.IRQMD = 2;
	ICU.IPR[0x2F].BIT.IPR = 15; //Set priority level
	ICU.IR[79].BIT.IR = 0; //Reset interrupt indication
	ICU.IER[9].BIT.IEN7 = 1; //Enable Interrupt Request IER
}

void fw_irq15_handle(void){

	ICU.IR[79].BIT.IR = 0;
}
