/*
 * sw_task_iic.c
 *
 *  Created on: 11/05/2013
 *      Author: celso
 */

#include "sw_config.h"

void sw_task_iic (void *pvParameters){

	portTickType xFlashRate, xLastFlashTime;

	xFlashRate = ( portTickType ) 1000 / portTICK_RATE_MS;

	/* We need to initialise xLastFlashTime prior to the first call to vTaskDelayUntil(). */
	xLastFlashTime = xTaskGetTickCount();

	fw_iic_send_start();
	fw_iic_send_byte(0x90, 0x03, 0xC0);
	fw_iic_send_stop();
	fw_iic_send_start();
	fw_iic_send_byte(0x3A, 0x31, 0x00);
	fw_iic_send_stop();
	fw_iic_send_start();
	fw_iic_send_byte(0x3A, 0x38, 0x00);
	fw_iic_send_stop();
	fw_iic_send_start();
	fw_iic_send_byte(0x3A, 0x2D, 0x08);
	fw_iic_send_stop();
	fw_iic_send_start();
	fw_iic_send_byte(0x3A, 0x27, 0x70);
	fw_iic_send_stop();


	for(;;){

		vTaskDelayUntil( &xLastFlashTime, xFlashRate );

		fw_iic_send_start();
		auxData.auxTemp.value = fw_iic_read_int(0x90, 0x00);
		fw_iic_send_stop();
		fw_iic_send_start();
		auxData.auxAcelerometer.x = fw_iic_read_int_inv(0x3A, 0x32);
		fw_iic_send_stop();
		fw_iic_send_start();
		auxData.auxAcelerometer.y = fw_iic_read_int_inv(0x3A, 0x34);
		fw_iic_send_stop();
		fw_iic_send_start();
		auxData.auxAcelerometer.z = fw_iic_read_int_inv(0x3A, 0x36);
		fw_iic_send_stop();

	}
}
