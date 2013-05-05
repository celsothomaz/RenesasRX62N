/*
 * fw_tmr.h
 *
 *  Created on: 23/04/2013
 *      Author: celso
 */

#ifndef FW_TMR_H_
#define FW_TMR_H_

void fw_tmr0_init(void);
void fw_tmr0_handle_CMIA0(void) __attribute__ ((interrupt));
void fw_tmr0_handle_CMIB0(void) __attribute__ ((interrupt));
void fw_tmr0_handle_OVI0(void) __attribute__ ((interrupt));

void fw_tmr1_init(void);
void fw_tmr1_handle_CMIA0(void) __attribute__ ((interrupt));
void fw_tmr1_handle_CMIB0(void) __attribute__ ((interrupt));
void fw_tmr1_handle_OVI0(void) __attribute__ ((interrupt));

void fw_tmr2_init(void);
void fw_tmr2_handle_CMIA0(void) __attribute__ ((interrupt));
void fw_tmr2_handle_CMIB0(void) __attribute__ ((interrupt));
void fw_tmr2_handle_OVI0(void) __attribute__ ((interrupt));

#endif /* FW_TMR_H_ */
