/*
 * fw_sw.c
 *
 *  Created on: 28/04/2013
 *      Author: celso
 */

#include "fw_config.h"

void fw_sw_init(void){

	PORT4.DDR.BIT.B0 = 0; //Set P40 by input
	PORT4.DDR.BIT.B1 = 0; //Set P41 by input
	PORT4.DDR.BIT.B2 = 0; //Set P42 by input

}
