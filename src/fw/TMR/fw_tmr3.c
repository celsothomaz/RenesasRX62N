/*
 * fw_tmr3.c
 *
 *  Created on: 05/05/2013
 *      Author: celso
 */

#include "sw_config.h"

void fw_tmr3_init(void){
	MSTP_TMR3 = 0;

	ICU.IER[0x16].BIT.IEN7 = 0; //Disable Interrupt Request IER
	ICU.IER[0x17].BIT.IEN0 = 0; //Disable Interrupt Request IER
	ICU.IER[0x17].BIT.IEN1 = 0; //Disable Interrupt Request IER

	TMR3.TCR.BIT.CCLR = 2;
	TMR3.TCR.BIT.OVIE = 0;
	TMR3.TCR.BIT.CMIEA = 1;
	TMR3.TCR.BIT.CMIEB = 1;

	TMR3.TCNT = 0xFF;
	TMR3.TCORA = 0x9D;
	TMR3.TCORB = 0xFE;

	TMR3.TCCR.BIT.CKS = 6;
	TMR3.TCCR.BIT.CSS = 1;
	TMR3.TCCR.BIT.TMRIS = 0;

	TMR3.TCSR.BIT.OSA = 0;
	TMR3.TCSR.BIT.OSB = 0;

	ICU.IPR[0x6B].BIT.IPR = 15; //Set priority level

	ICU.IR[183].BIT.IR = 0; //Reset interrupt indication
	ICU.IR[184].BIT.IR = 0; //Reset interrupt indication
	ICU.IR[185].BIT.IR = 0; //Reset interrupt indication

	ICU.IER[0x16].BIT.IEN7 = 1; //Enable Interrupt Request IER
	ICU.IER[0x17].BIT.IEN0 = 1; //Enable Interrupt Request IER
	ICU.IER[0x17].BIT.IEN1 = 0; //Enable Interrupt Request IER

}

void  fw_tmr3_handle_CMI3A(void){
	ICU.IR[183].BIT.IR = 0; //Reset interrupt indication
}


void  fw_tmr3_handle_CMI3B(void){
	ICU.IR[184].BIT.IR = 0; //Reset interrupt indication
}

void  fw_tmr3_handle_OV3I(void){
	ICU.IR[185].BIT.IR = 0; //Reset interrupt indication
}
