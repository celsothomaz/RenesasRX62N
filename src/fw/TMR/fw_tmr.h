/*
 * fw_tmr.h
 *
 *  Created on: 23/04/2013
 *      Author: celso
 */

#ifndef FW_TMR_H_
#define FW_TMR_H_

void fw_tmr0_init(void);
void fw_tmr0_handle_CMI0A(void) __attribute__ ((interrupt));
void fw_tmr0_handle_CMI0B(void) __attribute__ ((interrupt));
void fw_tmr0_handle_OV0I(void) __attribute__ ((interrupt));

void fw_tmr1_init(void);
void fw_tmr1_handle_CMI1A(void) __attribute__ ((interrupt));
void fw_tmr1_handle_CMI1B(void) __attribute__ ((interrupt));
void fw_tmr1_handle_OV1I(void) __attribute__ ((interrupt));

void fw_tmr2_init(void);
void fw_tmr2_handle_CMI2A(void) __attribute__ ((interrupt));
void fw_tmr2_handle_CMI2B(void) __attribute__ ((interrupt));
void fw_tmr2_handle_OV2I(void) __attribute__ ((interrupt));

void fw_tmr3_init(void);
void fw_tmr3_handle_CMI3A(void) __attribute__ ((interrupt));
void fw_tmr3_handle_CMI3B(void) __attribute__ ((interrupt));
void fw_tmr3_handle_OV3I(void) __attribute__ ((interrupt));

#endif /* FW_TMR_H_ */
