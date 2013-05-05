/*
 * fw_ad.c
 *
 *  Created on: 22/04/2013
 *      Author: celso
 */

#include "../fw_config.h"

void fw_ad_init(void){
	MSTP_AD0 = 1;
	MSTP_AD1 = 1;
	MSTP_S12AD = 0;

	PORT4.DDR.BIT.B4 = 0;
	PORT4.ICR.BIT.B4 = 1;

	ICU.IER[0x0C].BIT.IEN6 = 0; //Disable Interrupt Request IER

	S12AD.ADCSR.BIT.EXTRG = 0;
	S12AD.ADCSR.BIT.TRGE = 1;
	S12AD.ADCSR.BIT.CKS = 3;
	S12AD.ADCSR.BIT.ADIE = 1;
	S12AD.ADCSR.BIT.ADCS = 1;
	S12AD.ADCSR.BIT.ADST = 0;

	S12AD.ADADS.BIT.ADS = 0x00;

	S12AD.ADANS.BIT.ANS = 0x10;

	S12AD.ADCER.BIT.ACE = 0;
	S12AD.ADCER.BIT.ADRFMT = 1;

	S12AD.ADSTRGR.BIT.ADSTRS = 0x09;

	S12AD.ADCSR.BIT.ADST = 1;

	ICU.IPR[0x48].BIT.IPR = 15; //Set priority level
	ICU.IR[102].BIT.IR = 0; //Reset interrupt indication
	ICU.IER[0x0C].BIT.IEN6 = 1; //Enable Interrupt Request IER
}

void  fw_ad_handle(void){

	unsigned short ADC_out, aux_adc_out;

	ADC_out = S12AD.ADDR4 & 0XFFFF;
	fw_glcd_line(2);
	fw_glcd_colun(0);
	fw_glcd_input(':');

	aux_adc_out = (unsigned char)((ADC_out & 0xF000) >> 12);
	if ((aux_adc_out >= 0) && (aux_adc_out <= 9)) fw_glcd_input(aux_adc_out + '0');
	if ((aux_adc_out >= 10) && (aux_adc_out <= 15)) fw_glcd_input(aux_adc_out - 10 + 'A');

	aux_adc_out = (unsigned char)((ADC_out & 0x0F00) >> 8);
	if ((aux_adc_out >= 0) && (aux_adc_out <= 9)) fw_glcd_input(aux_adc_out + '0');
	if ((aux_adc_out >= 10) && (aux_adc_out <= 15)) fw_glcd_input(aux_adc_out - 10 + 'A');

	aux_adc_out = (unsigned char)((ADC_out & 0x00F0) >> 4);
	if ((aux_adc_out >= 0) && (aux_adc_out <= 9)) fw_glcd_input(aux_adc_out + '0');
	if ((aux_adc_out >= 10) && (aux_adc_out <= 15)) fw_glcd_input(aux_adc_out - 10 + 'A');

	aux_adc_out = (unsigned char)(ADC_out & 0x000F);
	if ((aux_adc_out >= 0) && (aux_adc_out <= 9)) fw_glcd_input(aux_adc_out + '0');
	if ((aux_adc_out >= 10) && (aux_adc_out <= 15)) fw_glcd_input(aux_adc_out - 10 + 'A');

	ICU.IR[102].BIT.IR = 0; //Reset interrupt indication

}
