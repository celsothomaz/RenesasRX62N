/*
 * fw_clock.c
 *
 *  Created on: 08/04/2013
 *      Author: celso
 */

#include "../fw_config.h"
/*
 * Init clock
 *
 *
 * */
int fw_clock_init(void){

	//Ajuste para internal clock em 96MHz
	SYSTEM.SCKCR.BIT.ICK = 0;
	//Ajuste peripherical clock para 48MHz
	SYSTEM.SCKCR.BIT.PCK = 1;
	//Ajuste external clock para 48MHz
	SYSTEM.SCKCR.BIT.BCK = 1;
	//Desabilita pino SDSCK
	SYSTEM.SCKCR.BIT.PSTOP0 = 1;
	//Desabilita pino BCLK
	SYSTEM.SCKCR.BIT.PSTOP1 = 1;
	SYSTEM.BCKCR.BIT.BCLKDIV = 0;

	return 0;
}
