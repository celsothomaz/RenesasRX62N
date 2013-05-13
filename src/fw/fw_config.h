/*
 * fw_config.h
 *
 *  Created on: 08/04/2013
 *      Author: celso
 */

#ifndef FW_CONFIG_H_
#define FW_CONFIG_H_

#include "iodefine.h"

#include "Clock/fw_clock.h"
#include "SCI/fw_sci2.h"
#include "SPI/fw_spi.h"
#include "GLCD/fw_glcd.h"
#include "AD/fw_ad.h"
#include "TMR/fw_tmr.h"
#include "CMT/cmt0.h"
#include "SWINT/fw_swint.h"
#include "ETH/fw_eth.h"
#include "IRQ/fw_irq.h"
#include "LED/fw_led.h"
#include "SW/fw_sw.h"
#include "RTC/fw_rtc.h"
#include "IIC/fw_iic.h"

#define DBG(x) transmit_text(x)

#ifndef NULL
#define NULL	0
#endif /* NULL */


//Package configuration
//Define one package

//#define LFBGA176
//#define TFLGA145
//#define LQFP144
#define LQFP100
//#define TFLGA85

//Package verification
#ifdef LFBGA176
	#define PACKAGE_DEFINED
#endif

#ifdef TFLGA145
	#ifdef PACKAGE_DEFINED
		#error "Need select only one package."
	#else
		#define PACKAGE_DEFINED
	#endif
#endif

#ifdef LQFP144
	#ifdef PACKAGE_DEFINED
		#error "Need select only one package."
	#else
		#define PACKAGE_DEFINED
	#endif
#endif

#ifdef LQFP100
	#ifdef PACKAGE_DEFINED
		#error "Need select only one package."
	#else
		#define PACKAGE_DEFINED
	#endif
#endif

#ifdef TFLGA85
	#ifdef PACKAGE_DEFINED
		#error "Need select only one package."
	#else
		#define PACKAGE_DEFINED
	#endif
#endif

#ifndef PACKAGE_DEFINED
	#error "Need define a package on fw_config.h."
#endif

//Clock configurations
#define FW_CLOCK_CRYSTAL 12000000L //MHz
#define FW_CLOCK_ICK 96000000L //MHz
#define FW_CLOCK_PCK 48000000L //MHz
#define FW_CLOCK_BCK 48000000L //MHz

//Pin BCLK configuration
//#define FW_CLOCK_BCLK_DIV_1
//#define FW_CLOCK_BCLK_DIV_2
#define FW_CLOCK_BCLK_DIV_DISABLE
//#define FW_CLOCK_BCLK_DIV_HIGH

//Pin SDCLK configuration
//#define FW_CLOCK_SDCLK_ENABLE
#define FW_CLOCK_SDCLK_DISABLE

//Oscillation stop detection control
//#define FW_CLOCK_OSC_STOP_ENABLE
#define FW_CLOCK_OSC_STOP_DISABLE

//Sub clock oscillator control
//#define FW_CLOCK_SUB_CLOCK_ENABLE
#define FW_CLOCK_SUB_CLOCK_DISABLE







#endif /* FW_CONFIG_H_ */
