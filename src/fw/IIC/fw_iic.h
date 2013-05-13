/*
 * fw_iic.h
 *
 *  Created on: 11/05/2013
 *      Author: celso
 */

#ifndef FW_IIC_H_
#define FW_IIC_H_

#define FW_IIC_SELFADDR 0xF0;

void fw_iic_init(void);
void fw_iic_uninit(void);
unsigned char fw_iic_send_start(void);
unsigned char fw_iic_send_stop(void);
unsigned char fw_iic_send_byte(unsigned char slave_addr, unsigned char slave_reg, unsigned char data_byte);
unsigned char fw_iic_write_byte(unsigned char slave_addr, unsigned char slave_reg);
unsigned char fw_iic_read_byte(unsigned char slave_addr, unsigned char slave_reg);
int fw_iic_read_int(unsigned char slave_addr, unsigned char slave_reg);
int fw_iic_read_int_inv(unsigned char slave_addr, unsigned char slave_reg);

#endif /* FW_IIC_H_ */
