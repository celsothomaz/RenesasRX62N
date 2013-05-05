/*
 * fw_swint.c
 *
 *  Created on: 24/04/2013
 *      Author: celso
 */

#include "sw_config.h"

void fw_swint_init(void){
	/* Enable the software interrupt. */
	_IEN( _ICU_SWINT ) = 1;

	/* Ensure the software interrupt is clear. */
	_IR( _ICU_SWINT ) = 0;

	/* Ensure the software interrupt is set to the kernel priority. */
	_IPR( _ICU_SWINT ) = configKERNEL_INTERRUPT_PRIORITY;
}

void fw_swint_handle(void){
	vSoftwareInterruptISR();
	_IR( _ICU_SWINT ) = 0;
}
