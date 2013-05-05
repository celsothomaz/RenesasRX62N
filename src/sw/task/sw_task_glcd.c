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
	fw_glcd_clean();
	fw_glcd_set_xy(0,0);
	fw_glcd_text("Screen 1");
}

void sw_mont_glcd_screen_1 (void){
	fw_glcd_clean();
	fw_glcd_set_xy(0,0);
	fw_glcd_text("Screen 2");
}
