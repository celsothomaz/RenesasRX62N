/*
 * fw_irq8.c
 *
 *  Created on: 26/04/2013
 *      Author: celso
 */

#include "sw_config.h"

void fw_irq8_init(void){
	//For IRQ8

	ICU.IER[9].BIT.IEN0 = 0; //Disable Interrupt Request IER
	PORT4.DDR.BIT.B0 = 0; //Set P42 by input
	PORT4.ICR.BIT.B0 = 1; //Enable P42 buffer
	/*
	 * Select operation mode of the IRQ (IRQMD)
	 * 0 -> low level
	 * 1 -> Falling edge
	 * 2 -> Rising edge
	 * 3 -> Rising and Falling edge
	 */
	ICU.IRQCR[8].BIT.IRQMD = 1;
	ICU.IPR[0x28].BIT.IPR = 15; //Set priority level
	ICU.IR[72].BIT.IR = 0; //Reset interrupt indication
	ICU.IER[9].BIT.IEN0 = 1; //Enable Interrupt Request IER
}

void fw_irq8_handle(void){
	LED10 = 1 - LED10;
	auxData.auxGLCD.screenNumber++;
	if (auxData.auxGLCD.screenNumber > 2) auxData.auxGLCD.screenNumber = 0;
	ICU.IR[72].BIT.IR = 0;
}
