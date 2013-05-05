/*
 * fw_tmr1.c
 *
 *  Created on: 03/05/2013
 *      Author: celso
 */

#include "sw_config.h"

void fw_tmr1_init(void){
	MSTP_TMR1 = 0;

	ICU.IER[0x16].BIT.IEN1 = 0; //Disable Interrupt Request IER
	ICU.IER[0x16].BIT.IEN2 = 0; //Disable Interrupt Request IER
	ICU.IER[0x16].BIT.IEN3 = 0; //Disable Interrupt Request IER

	TMR1.TCR.BIT.CCLR = 2;
	TMR1.TCR.BIT.OVIE = 0;
	TMR1.TCR.BIT.CMIEA = 1;
	TMR1.TCR.BIT.CMIEB = 1;

	TMR1.TCNT = 0xFF;
	TMR1.TCORA = 0x9D;
	TMR1.TCORB = 0xFE;

	TMR1.TCCR.BIT.CKS = 6;
	TMR1.TCCR.BIT.CSS = 1;
	TMR1.TCCR.BIT.TMRIS = 0;

	ICU.IPR[0x69].BIT.IPR = 15; //Set priority level

	ICU.IR[177].BIT.IR = 0; //Reset interrupt indication
	ICU.IR[178].BIT.IR = 0; //Reset interrupt indication
	ICU.IR[179].BIT.IR = 0; //Reset interrupt indication

	ICU.IER[0x16].BIT.IEN1 = 1; //Enable Interrupt Request IER
	ICU.IER[0x16].BIT.IEN2 = 1; //Enable Interrupt Request IER
	ICU.IER[0x16].BIT.IEN3 = 0; //Enable Interrupt Request IER

}

void  fw_tmr1_handle_CMI1A(void){
	ICU.IR[177].BIT.IR = 0; //Reset interrupt indication
}

void  fw_tmr1_handle_CMI1B(void){
	ICU.IR[178].BIT.IR = 0; //Reset interrupt indication
}

void  fw_tmr1_handle_OV1I(void){
	ICU.IR[179].BIT.IR = 0; //Reset interrupt indication
}
