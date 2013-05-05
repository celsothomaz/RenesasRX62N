/*
 * sw_task_glcd.c
 *
 *  Created on: 03/05/2013
 *      Author: celso
 */

#include "sw_config.h"

void sw_mont_glcd_screen_0 (void);
void sw_mont_glcd_screen_1 (void);

void sw_task_glcd (void *pvParameters){

	portTickType xFlashRate, xLastFlashTime;

	xFlashRate = ( portTickType ) 500 / portTICK_RATE_MS;

	/* We need to initialise xLastFlashTime prior to the first call to vTaskDelayUntil(). */
	xLastFlashTime = xTaskGetTickCount();

	sw_mont_glcd_screen_0();

	for(;;){
		/* Delay for half the flash period then turn the LED on. */
		vTaskDelayUntil( &xLastFlashTime, xFlashRate );
		LED7 = 1 - LED7;

		switch (auxData.auxGLCD.screenNumber)
		{
		case 0:
			sw_mont_glcd_screen_0();
			break;
		case 1:
			sw_mont_glcd_screen_1();
			break;
		}

		fw_glcd_refresh();
	}
}

void sw_mont_glcd_screen_0 (void){

	unsigned short aux_adc_out;

	fw_glcd_clean();
	fw_glcd_set_xy(0,0);
	fw_glcd_text("Screen 1");

	fw_glcd_line(2);
	fw_glcd_colun(0);
	fw_glcd_input(':');

	aux_adc_out = (unsigned char)((auxData.auxAN.AN4_value & 0xF000) >> 12);
	if ((aux_adc_out >= 0) && (aux_adc_out <= 9)) fw_glcd_input(aux_adc_out + '0');
	if ((aux_adc_out >= 10) && (aux_adc_out <= 15)) fw_glcd_input(aux_adc_out - 10 + 'A');

	aux_adc_out = (unsigned char)((auxData.auxAN.AN4_value & 0x0F00) >> 8);
	if ((aux_adc_out >= 0) && (aux_adc_out <= 9)) fw_glcd_input(aux_adc_out + '0');
	if ((aux_adc_out >= 10) && (aux_adc_out <= 15)) fw_glcd_input(aux_adc_out - 10 + 'A');

	aux_adc_out = (unsigned char)((auxData.auxAN.AN4_value & 0x00F0) >> 4);
	if ((aux_adc_out >= 0) && (aux_adc_out <= 9)) fw_glcd_input(aux_adc_out + '0');
	if ((aux_adc_out >= 10) && (aux_adc_out <= 15)) fw_glcd_input(aux_adc_out - 10 + 'A');

	aux_adc_out = (unsigned char)(auxData.auxAN.AN4_value & 0x000F);
	if ((aux_adc_out >= 0) && (aux_adc_out <= 9)) fw_glcd_input(aux_adc_out + '0');
	if ((aux_adc_out >= 10) && (aux_adc_out <= 15)) fw_glcd_input(aux_adc_out - 10 + 'A');

	fw_glcd_line(4);
	fw_glcd_colun(0);





	fw_glcd_input(RTC.RDAYCNT.BIT.DAY10 + '0');
	fw_glcd_input(RTC.RDAYCNT.BIT.DAY1 + '0');
	fw_glcd_input('/');
	fw_glcd_input(RTC.RMONCNT.BIT.MON10 + '0');
	fw_glcd_input(RTC.RMONCNT.BIT.MON1 + '0');
	fw_glcd_input('/');
	fw_glcd_input(RTC.RYRCNT.BIT.YEAR1000 + '0');
	fw_glcd_input(RTC.RYRCNT.BIT.YEAR100 + '0');
	fw_glcd_input(RTC.RYRCNT.BIT.YEAR10 + '0');
	fw_glcd_input(RTC.RYRCNT.BIT.YEAR1 + '0');

	fw_glcd_line(5);
	fw_glcd_colun(0);

	fw_glcd_input(RTC.RHRCNT.BIT.HOUR10 + '0');
	fw_glcd_input(RTC.RHRCNT.BIT.HOUR1 + '0');
	fw_glcd_input(':');
	fw_glcd_input(RTC.RMINCNT.BIT.MIN10 + '0');
	fw_glcd_input(RTC.RMINCNT.BIT.MIN1 + '0');
	fw_glcd_input(':');
	fw_glcd_input(RTC.RSECCNT.BIT.SEC10 + '0');
	fw_glcd_input(RTC.RSECCNT.BIT.SEC1 + '0');

}

void sw_mont_glcd_screen_1 (void){
	fw_glcd_clean();
	fw_glcd_set_xy(0,0);
	fw_glcd_text("Screen 2");
}
