/*
 * fw_sw.h
 *
 *  Created on: 28/04/2013
 *      Author: celso
 */

#ifndef FW_SW_H_
#define FW_SW_H_

#define SW1 (PORT4.PORT.BIT.B0)
#define SW2 (PORT4.PORT.BIT.B1)
#define SW3 (PORT4.PORT.BIT.B1)

void fw_sw_init(void);

#endif /* FW_SW_H_ */
