/*
 * fw_rtc.c
 *
 *  Created on: 05/05/2013
 *      Author: celso
 */

#include "sw_config.h"

void fw_rtc_init(void){

	ICU.IER[0x07].BIT.IEN6 = 0;
	ICU.IER[0x07].BIT.IEN7 = 0;

	RTC.RCR2.BIT.START = 1;

	RTC.RYRCNT.WORD = 0x2013;
	RTC.RMONCNT.BYTE = 0x05;
	RTC.RDAYCNT.BYTE = 0x05;
	RTC.RHRCNT.BYTE = 0x16;
	RTC.RMINCNT.BYTE = 0x00;
	RTC.RSECCNT.BYTE = 0x00;
}

char *fw_rtc_get_datetime(void){




}
