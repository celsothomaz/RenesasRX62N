/*
 * sw_config.h
 *
 *  Created on: 03/05/2013
 *      Author: celso
 */

#ifndef SW_CONFIG_H_
#define SW_CONFIG_H_

struct stData {
	struct stGLCD{
		char screenNumber;
	}auxGLCD;
	struct stAN{
		int AN4_value;
	}auxAN;
	union stTEMP{
		int value;
		struct{
			unsigned char B0;
			unsigned char B1;
		}BYTE;
	}auxTemp;
	struct stACELEROMETER{
		int x;
		int y;
		int z;
	}auxAcelerometer;
};

extern struct stData auxData;

#include "fw_config.h"

/* Kernel includes. */
#include "FreeRTOS.h"
#include "task.h"

/* Project tasks */
#include "sw_task.h"



#endif /* SW_CONFIG_H_ */
