/*
 * fw_irq10.c
 *
 *  Created on: 03/05/2013
 *      Author: celso
 */

#include "sw_config.h"

void fw_irq10_init(void){
	//For IRQ10

	ICU.IER[9].BIT.IEN2 = 0; //Disable Interrupt Request IER
	PORT4.DDR.BIT.B2 = 0; //Set P42 by input
	PORT4.ICR.BIT.B2 = 1; //Enable P42 buffer
	/*
	 * Select operation mode of the IRQ (IRQMD)
	 * 0 -> low level
	 * 1 -> Falling edge
	 * 2 -> Rising edge
	 * 3 -> Rising and Falling edge
	 */
	ICU.IRQCR[10].BIT.IRQMD = 1;
	ICU.IPR[0x2A].BIT.IPR = 15; //Set priority level
	ICU.IR[74].BIT.IR = 0; //Reset interrupt indication
	ICU.IER[9].BIT.IEN2 = 1; //Enable Interrupt Request IER
}

void fw_irq10_handle(void){
	LED12 = 1 - LED12;
	ICU.IR[74].BIT.IR = 0;
}
