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
};

extern struct stData auxData;

#include "fw_config.h"

/* Kernel includes. */
#include "FreeRTOS.h"
#include "task.h"

/* Project tasks */
#include "sw_task.h"



#endif /* SW_CONFIG_H_ */
