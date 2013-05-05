/*
 * fw_sci2.h
 *
 *  Created on: 10/04/2013
 *      Author: celso
 */

#ifndef FW_SCI2_H_
#define FW_SCI2_H_

void fw_sci2_init(void);
int transmit_data(unsigned char data);
void transmit_text(const char *data);
unsigned char receive_data(void);

#endif /* FW_SCI2_H_ */
