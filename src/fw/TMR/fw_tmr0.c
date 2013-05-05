/*
 * fw_tmr0.c
 *
 *  Created on: 23/04/2013
 *      Author: celso
 */

#include "../fw_config.h"

void fw_tmr0_init(void){
	MSTP_TMR0 = 0;

	ICU.IER[0x15].BIT.IEN6 = 0; //Disable Interrupt Request IER
	ICU.IER[0x15].BIT.IEN7 = 0; //Disable Interrupt Request IER
	ICU.IER[0x16].BIT.IEN0 = 0; //Disable Interrupt Request IER

	TMR0.TCR.BIT.CCLR = 2;
	TMR0.TCR.BIT.OVIE = 0;
	TMR0.TCR.BIT.CMIEA = 1;
	TMR0.TCR.BIT.CMIEB = 1;

	TMR0.TCNT = 0xFF;
	TMR0.TCORA = 0x9D;
	TMR0.TCORB = 0xFE;

	TMR0.TCCR.BIT.CKS = 6;
	TMR0.TCCR.BIT.CSS = 1;
	TMR0.TCCR.BIT.TMRIS = 0;

	TMR0.TCSR.BIT.OSA = 0;
	TMR0.TCSR.BIT.OSB = 0;
	TMR0.TCSR.BIT.ADTE = 1;

	ICU.IPR[0x68].BIT.IPR = 15; //Set priority level

	ICU.IR[174].BIT.IR = 0; //Reset interrupt indication
	ICU.IR[175].BIT.IR = 0; //Reset interrupt indication
	ICU.IR[176].BIT.IR = 0; //Reset interrupt indication

	ICU.IER[0x15].BIT.IEN6 = 1; //Enable Interrupt Request IER
	ICU.IER[0x15].BIT.IEN7 = 1; //Enable Interrupt Request IER
	ICU.IER[0x16].BIT.IEN0 = 0; //Enable Interrupt Request IER

}

void  fw_tmr0_handle_CMIA0(void){
	ICU.IR[174].BIT.IR = 0; //Reset interrupt indication
}

void  fw_tmr0_handle_CMIB0(void){
	ICU.IR[175].BIT.IR = 0; //Reset interrupt indication
}

void  fw_tmr0_handle_OVI0(void){
	ICU.IR[176].BIT.IR = 0; //Reset interrupt indication
}
