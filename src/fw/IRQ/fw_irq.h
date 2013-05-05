/*
 * fw_irq.h
 *
 *  Created on: 26/04/2013
 *      Author: celso
 */

#ifndef FW_IRQ_H_
#define FW_IRQ_H_

void fw_irq8_init(void);
void fw_irq8_handle(void) __attribute__ ((interrupt));
void fw_irq9_init(void);
void fw_irq9_handle(void) __attribute__ ((interrupt));
void fw_irq10_init(void);
void fw_irq10_handle(void) __attribute__ ((interrupt));
void fw_irq15_init(void);
void fw_irq15_handle(void) __attribute__ ((interrupt));

#endif /* FW_IRQ_H_ */
