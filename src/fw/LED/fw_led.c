/*
 * fw_led.c
 *
 *  Created on: 28/04/2013
 *      Author: celso
 */

#include "fw_config.h"

void fw_led_init(void){

	PORTD.DDR.BIT.B0 = 1; //Set PD0 by output
	PORTD.DDR.BIT.B1 = 1; //Set PD1 by output
	PORTD.DDR.BIT.B2 = 1; //Set PD2 by output
	PORTD.DDR.BIT.B3 = 1; //Set PD3 by output
	PORTD.DDR.BIT.B4 = 1; //Set PD4 by output
	PORTD.DDR.BIT.B5 = 1; //Set PD5 by output
	PORTD.DDR.BIT.B6 = 1; //Set PD6 by output
	PORTD.DDR.BIT.B7 = 1; //Set PD7 by output
	PORTE.DDR.BIT.B0 = 1; //Set PE0 by output
	PORTE.DDR.BIT.B1 = 1; //Set PE1 by output
	PORTE.DDR.BIT.B2 = 1; //Set PE2 by output
	PORTE.DDR.BIT.B3 = 1; //Set PE3 by output

	PORTD.DR.BIT.B0 = 0; //Set PD0 by output
	PORTD.DR.BIT.B1 = 0; //Set PD1 by output
	PORTD.DR.BIT.B2 = 0; //Set PD2 by output
	PORTD.DR.BIT.B3 = 0; //Set PD3 by output
	PORTD.DR.BIT.B4 = 0; //Set PD4 by output
	PORTD.DR.BIT.B5 = 0; //Set PD5 by output
	PORTD.DR.BIT.B6 = 0; //Set PD6 by output
	PORTD.DR.BIT.B7 = 0; //Set PD7 by output
	PORTE.DR.BIT.B0 = 0; //Set PE0 by output
	PORTE.DR.BIT.B1 = 0; //Set PE1 by output
	PORTE.DR.BIT.B2 = 0; //Set PE2 by output
	PORTE.DR.BIT.B3 = 0; //Set PE3 by output

	PORTD.PCR.BIT.B0 = 0; //Set PD0 by output
	PORTD.PCR.BIT.B1 = 0; //Set PD1 by output
	PORTD.PCR.BIT.B2 = 0; //Set PD2 by output
	PORTD.PCR.BIT.B3 = 0; //Set PD3 by output
	PORTD.PCR.BIT.B4 = 0; //Set PD4 by output
	PORTD.PCR.BIT.B5 = 0; //Set PD5 by output
	PORTD.PCR.BIT.B6 = 0; //Set PD6 by output
	PORTD.PCR.BIT.B7 = 0; //Set PD7 by output
	PORTE.PCR.BIT.B0 = 0; //Set PE0 by output
	PORTE.PCR.BIT.B1 = 0; //Set PE1 by output
	PORTE.PCR.BIT.B2 = 0; //Set PE2 by output
	PORTE.PCR.BIT.B3 = 0; //Set PE3 by output

	/* Configure LEDs */
	LED4 = LED_OFF;
	LED5 = LED_OFF;
	LED6 = LED_OFF;
	LED7 = LED_OFF;
	LED8 = LED_OFF;
	LED9 = LED_OFF;
	LED10 = LED_OFF;
	LED11 = LED_OFF;
	LED12 = LED_OFF;
	LED13 = LED_OFF;
	LED14 = LED_OFF;
	LED15 = LED_OFF;

}
