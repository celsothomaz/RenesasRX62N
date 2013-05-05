/*
 * fw_led.h
 *
 *  Created on: 28/04/2013
 *      Author: celso
 */

#ifndef FW_LED_H_
#define FW_LED_H_

/* General Values */

//#define LED_POSITIVE_LOGIC

#ifdef LED_POSITIVE_LOGIC
	#define		LED_ON          (1)
	#define 	LED_OFF			(0)
#else
/* LEDs are using NEGATIVE LOGIC... */
	#define		LED_ON          (0)
	#define 	LED_OFF			(1)
#endif

#define     LED4            PORTD.DR.BIT.B5
#define     LED5            PORTE.DR.BIT.B3
#define     LED6            PORTD.DR.BIT.B2
#define     LED7            PORTE.DR.BIT.B0
#define     LED8            PORTD.DR.BIT.B4
#define     LED9            PORTE.DR.BIT.B2
#define     LED10           PORTD.DR.BIT.B1
#define     LED11           PORTD.DR.BIT.B7
#define     LED12           PORTD.DR.BIT.B3
#define     LED13           PORTE.DR.BIT.B1
#define     LED14           PORTD.DR.BIT.B0
#define     LED15           PORTD.DR.BIT.B6

void fw_led_init(void);

#endif /* FW_LED_H_ */
