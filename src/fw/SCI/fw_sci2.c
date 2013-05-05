/*
 * fw_sci2.c
 *
 *  Created on: 10/04/2013
 *      Author: celso
 */

#include "fw_config.h"

void fw_sci2_init(void){
	MSTP(SCI2) = 0;
	IOPORT.PFFSCI.BIT.SCI2S = 1;
	PORT1.DDR.BIT.B2 = 0;
	PORT1.ICR.BIT.B2 = 1;
	PORT1.DDR.BIT.B3 = 1;
	SCI2.SCR.BYTE = 0;
	SCI2.SMR.BYTE = 0x00;
	SCI2.SCR.BIT.RIE = 1;
	SCI2.SCR.BIT.TIE = 1;
	IR(SCI2, RXI2) = 0;
	IR(SCI2, TXI2) = 0;
	IEN(SCI2, RXI2) = 0;

	IEN(SCI2, TXI2) = 0;
	SCI2.BRR = 155;
	SCI2.SCR.BYTE |= 0x30;
}

int transmit_data(unsigned char data){
	while(IR(SCI2, TXI2) == 0);
	IR(SCI2, TXI2) = 0;
	SCI2.TDR = data;
}

void transmit_text(const char *data){
	while (*data != 0){
		transmit_data(*data);
		data++;
	}
	transmit_data(13);
	transmit_data(10);
}

unsigned char receive_data(void){
	unsigned char rcvd_data = 0;
	while(IR(SCI2, RXI2) != 1);
	rcvd_data = SCI2.RDR;
	IR(SCI2, RXI2) = 0;
	return(rcvd_data);
}
