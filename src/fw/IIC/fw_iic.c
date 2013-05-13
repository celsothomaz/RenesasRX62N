/*
 * fw_iic.c
 *
 *  Created on: 11/05/2013
 *      Author: celso
 */

#include "sw_config.h"

void fw_iic_init(void){
	SYSTEM.MSTPCRB.BIT.MSTPB21 = 0;
	RIIC0.ICCR1.BIT.ICE = 0;
	RIIC0.ICCR1.BIT.IICRST = 1;
	RIIC0.ICCR1.BIT.IICRST = 0;
	RIIC0.SARU0.BIT.FS = 0;
	RIIC0.SARL0.BYTE = FW_IIC_SELFADDR;
	RIIC0.ICMR1.BIT.CKS = 7;
	RIIC0.ICBRH.BIT.BRH = 28;
	RIIC0.ICBRL.BIT.BRL = 29;
	RIIC0.ICMR3.BIT.ACKWP = 1;
	RIIC0.ICIER.BIT.RIE = 1;
	RIIC0.ICIER.BIT.TIE = 1;
	RIIC0.ICIER.BIT.TEIE = 0;
	RIIC0.ICIER.BIT.NAKIE = 1;
	RIIC0.ICIER.BIT.SPIE = 1;
	RIIC0.ICIER.BIT.STIE = 0;
	RIIC0.ICIER.BIT.ALIE = 0;
	RIIC0.ICIER.BIT.TMOIE = 0;
	PORT1.ICR.BIT.B3 = 1;
	PORT1.ICR.BIT.B2 = 1;
	RIIC0.ICCR1.BIT.ICE = 1;
}

void fw_iic_uninit(void){
	SYSTEM.MSTPCRB.BIT.MSTPB21 = 1;
}

unsigned char fw_iic_send_start(void){
	if(RIIC0.ICCR1.BIT.ICE){
		while(RIIC0.ICCR2.BIT.BBSY);
		RIIC0.ICCR2.BIT.ST = 1;
		while(!(RIIC0.ICCR2.BIT.BBSY && RIIC0.ICSR2.BIT.START));
		RIIC0.ICSR2.BIT.START = 0;
		return 1;
	}
	else return 0;
}

unsigned char fw_iic_send_stop(void){
	if(RIIC0.ICCR1.BIT.ICE){
		while(RIIC0.ICCR2.BIT.BBSY){
			RIIC0.ICCR2.BIT.SP = 1;
		}
		return 1;
	}
	else return 0;
}

unsigned char fw_iic_send_byte(unsigned char slave_addr, unsigned char slave_reg, unsigned char data_byte){
	RIIC0.ICDRT = slave_addr & (0xFE);
	while(!RIIC0.ICSR2.BIT.TDRE);
	RIIC0.ICDRT = slave_reg;
	while(!RIIC0.ICSR2.BIT.TEND){
		if(RIIC0.ICSR2.BIT.NACKF){
			RIIC0.ICSR2.BIT.NACKF = 0;
			return 0;
		}
	}
	while(!RIIC0.ICSR2.BIT.TDRE);
	RIIC0.ICDRT = data_byte;
	while(!RIIC0.ICSR2.BIT.TEND){
		if(RIIC0.ICSR2.BIT.NACKF){
			RIIC0.ICSR2.BIT.NACKF = 0;
			return 0;
		}
	}
	while(!RIIC0.ICSR2.BIT.TDRE);
	while(!RIIC0.ICSR2.BIT.TEND){
		if(RIIC0.ICSR2.BIT.NACKF){
			RIIC0.ICSR2.BIT.NACKF = 0;
			return 0;
		}
	}
	return 1;
}

unsigned char fw_iic_write_byte(unsigned char slave_addr, unsigned char data_byte){
	RIIC0.ICDRT = slave_addr & (0xFE);
	while(!RIIC0.ICSR2.BIT.TDRE);
	RIIC0.ICDRT = data_byte;
	while(!RIIC0.ICSR2.BIT.TEND){
		if(RIIC0.ICSR2.BIT.NACKF){
			RIIC0.ICSR2.BIT.NACKF = 0;
			return 0;
		}
	}
	while(!RIIC0.ICSR2.BIT.TDRE);
	while(!RIIC0.ICSR2.BIT.TEND){
		if(RIIC0.ICSR2.BIT.NACKF){
			RIIC0.ICSR2.BIT.NACKF = 0;
			return 0;
		}
	}
	return 1;
}

unsigned char fw_iic_read_byte(unsigned char slave_addr, unsigned char slave_reg){
	unsigned char read_byte = 0;
	fw_iic_write_byte(slave_addr,slave_reg);
	fw_iic_send_stop();
	RIIC0.ICSR2.BIT.STOP = 0;
	fw_iic_send_start();
	while(!RIIC0.ICSR2.BIT.TDRE);
	RIIC0.ICDRT = slave_addr | (0x01);
	while(!RIIC0.ICSR2.BIT.RDRF);
	if(RIIC0.ICSR2.BIT.NACKF == 0){
		RIIC0.ICMR3.BIT.WAIT = 1;
		RIIC0.ICMR3.BIT.ACKBT = 1;
		read_byte = RIIC0.ICDRR;
		while(!RIIC0.ICSR2.BIT.RDRF);
		RIIC0.ICSR2.BIT.STOP = 0;
		RIIC0.ICCR2.BIT.SP = 1;
		read_byte = RIIC0.ICDRR;
		while(!RIIC0.ICSR2.BIT.STOP);
		return read_byte;
	}
	else return 0xFF;
}

int fw_iic_read_int(unsigned char slave_addr, unsigned char slave_reg){
	unsigned char read_byte = 0;
	int aux_return = 0;
	fw_iic_write_byte(slave_addr,slave_reg);
	fw_iic_send_stop();
	RIIC0.ICSR2.BIT.STOP = 0;
	fw_iic_send_start();
	while(!RIIC0.ICSR2.BIT.TDRE);
	RIIC0.ICDRT = slave_addr | (0x01);
	while(!RIIC0.ICSR2.BIT.RDRF);
	if(RIIC0.ICSR2.BIT.NACKF == 0){
		RIIC0.ICMR3.BIT.WAIT = 1;
		RIIC0.ICMR3.BIT.ACKBT = 0;
		read_byte = RIIC0.ICDRR;
		while(!RIIC0.ICSR2.BIT.RDRF);

		RIIC0.ICMR3.BIT.WAIT = 1;
		RIIC0.ICMR3.BIT.ACKBT = 1;
		read_byte = RIIC0.ICDRR;
		aux_return = read_byte << 8;
		while(!RIIC0.ICSR2.BIT.RDRF);

		RIIC0.ICSR2.BIT.STOP = 0;
		RIIC0.ICCR2.BIT.SP = 1;
		read_byte = RIIC0.ICDRR;
		aux_return = aux_return | read_byte;
		while(!RIIC0.ICSR2.BIT.STOP);

		//RIIC0.ICSR2.BIT.STOP = 0;
		//RIIC0.ICCR2.BIT.SP = 1;
		//read_byte = RIIC0.ICDRR;
		//while(!RIIC0.ICSR2.BIT.STOP);
		//aux_return = aux_return | read_byte;
		return aux_return;
	}
	else return -1000;
}

int fw_iic_read_int_inv(unsigned char slave_addr, unsigned char slave_reg){
	unsigned char read_byte = 0;
	int aux_return = 0;
	fw_iic_write_byte(slave_addr,slave_reg);
	fw_iic_send_stop();
	RIIC0.ICSR2.BIT.STOP = 0;
	fw_iic_send_start();
	while(!RIIC0.ICSR2.BIT.TDRE);
	RIIC0.ICDRT = slave_addr | (0x01);
	while(!RIIC0.ICSR2.BIT.RDRF);
	if(RIIC0.ICSR2.BIT.NACKF == 0){
		RIIC0.ICMR3.BIT.WAIT = 1;
		RIIC0.ICMR3.BIT.ACKBT = 0;
		read_byte = RIIC0.ICDRR;
		while(!RIIC0.ICSR2.BIT.RDRF);

		RIIC0.ICMR3.BIT.WAIT = 1;
		RIIC0.ICMR3.BIT.ACKBT = 1;
		read_byte = RIIC0.ICDRR;
		aux_return = read_byte;
		while(!RIIC0.ICSR2.BIT.RDRF);

		RIIC0.ICSR2.BIT.STOP = 0;
		RIIC0.ICCR2.BIT.SP = 1;
		read_byte = RIIC0.ICDRR;
		aux_return = aux_return | (read_byte << 8);
		while(!RIIC0.ICSR2.BIT.STOP);

		//RIIC0.ICSR2.BIT.STOP = 0;
		//RIIC0.ICCR2.BIT.SP = 1;
		//read_byte = RIIC0.ICDRR;
		//while(!RIIC0.ICSR2.BIT.STOP);
		//aux_return = aux_return | read_byte;
		return aux_return;
	}
	else return -1000;
}

