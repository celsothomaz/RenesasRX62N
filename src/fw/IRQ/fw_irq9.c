/*
 * fw_irq9.c
 *
 *  Created on: 03/05/2013
 *      Author: celso
 */

#include "sw_config.h"

void fw_irq9_init(void){
	//For IRQ9

	ICU.IER[9].BIT.IEN1 = 0; //Disable Interrupt Request IER
	PORT4.DDR.BIT.B1 = 0; //Set P42 by input
	PORT4.ICR.BIT.B1 = 1; //Enable P42 buffer
	/*
	 * Select operation mode of the IRQ (IRQMD)
	 * 0 -> low level
	 * 1 -> Falling edge
	 * 2 -> Rising edge
	 * 3 -> Rising and Falling edge
	 */
	ICU.IRQCR[9].BIT.IRQMD = 1;
	ICU.IPR[0x29].BIT.IPR = 15; //Set priority level
	ICU.IR[73].BIT.IR = 0; //Reset interrupt indication
	ICU.IER[9].BIT.IEN1 = 1; //Enable Interrupt Request IER
}

void fw_irq9_handle(void){
	LED11 = 1 - LED11;
	ICU.IR[73].BIT.IR = 0;
}
