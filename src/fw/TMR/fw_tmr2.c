/*
 * fw_tmr2.c
 *
 *  Created on: 03/05/2013
 *      Author: celso
 */

#include "sw_config.h"

void fw_tmr2_init(void){
	MSTP_TMR2 = 0;

	ICU.IER[0x16].BIT.IEN4 = 0; //Disable Interrupt Request IER
	ICU.IER[0x16].BIT.IEN5 = 0; //Disable Interrupt Request IER
	ICU.IER[0x16].BIT.IEN6 = 0; //Disable Interrupt Request IER

	TMR2.TCR.BIT.CCLR = 2;
	TMR2.TCR.BIT.OVIE = 0;
	TMR2.TCR.BIT.CMIEA = 1;
	TMR2.TCR.BIT.CMIEB = 1;

	TMR2.TCNT = 0xFF;
	TMR2.TCORA = 0x9D;
	TMR2.TCORB = 0xFE;

	TMR2.TCCR.BIT.CKS = 6;
	TMR2.TCCR.BIT.CSS = 1;
	TMR2.TCCR.BIT.TMRIS = 0;

	TMR2.TCSR.BIT.OSA = 0;
	TMR2.TCSR.BIT.OSB = 0;


	ICU.IPR[0x6A].BIT.IPR = 15; //Set priority level

	ICU.IR[180].BIT.IR = 0; //Reset interrupt indication
	ICU.IR[181].BIT.IR = 0; //Reset interrupt indication
	ICU.IR[182].BIT.IR = 0; //Reset interrupt indication

	ICU.IER[0x16].BIT.IEN4 = 1; //Enable Interrupt Request IER
	ICU.IER[0x16].BIT.IEN5 = 1; //Enable Interrupt Request IER
	ICU.IER[0x16].BIT.IEN6 = 0; //Enable Interrupt Request IER

}

void  fw_tmr2_handle_CMI2A(void){
	ICU.IR[180].BIT.IR = 0; //Reset interrupt indication
}


void  fw_tmr2_handle_CMI2B(void){
	ICU.IR[181].BIT.IR = 0; //Reset interrupt indication
}

void  fw_tmr2_handle_OV2I(void){
	ICU.IR[182].BIT.IR = 0; //Reset interrupt indication
}
