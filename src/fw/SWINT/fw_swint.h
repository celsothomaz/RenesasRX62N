/*
 * fw_swint.h
 *
 *  Created on: 24/04/2013
 *      Author: celso
 */

#ifndef FW_SWINT_H_
#define FW_SWINT_H_

void fw_swint_init(void);
void fw_swint_handle(void) __attribute__ ((interrupt));

#endif /* FW_SWINT_H_ */
