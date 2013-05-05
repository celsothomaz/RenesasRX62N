/*
 * fw_spi.h
 *
 *  Created on: 14/04/2013
 *      Author: celso
 */

#ifndef FW_SPI_H_
#define FW_SPI_H_

#define FW_GLCD_CS PORTC.DR.BIT.B2
#define FW_RESET_IO PORTC.DR.BIT.B3

void fw_spi_init(void);
unsigned short fw_spi_send_short(unsigned short cmd);

#endif /* FW_SPI_H_ */
