/*
 * fw_setup.c
 *
 *  Created on: 08/04/2013
 *      Author: celso
 */

#include "fw_config.h"

void fw_setup (void){

	int res;

	res = fw_clock_init();

	//__asm volatile( "CLRPSW I" );

	fw_sci2_init();

	DBG("SPI Initialization");
	fw_spi_init();

	DBG("GLCD Initialization");
	fw_glcd_init();

	//DBG("AD Initialization");
	//fw_ad_init();

	//DBG("TMR0 Initialization");
	//fw_tmr0_init();

	//DBG("TMR1 Initialization");
	//fw_tmr1_init();

	DBG("ETH Initialization");
	fw_eth_init();

	DBG("IRQ8 Initialization");
	fw_irq8_init();

	DBG("IRQ9 Initialization");
	fw_irq9_init();

	DBG("IRQ10 Initialization");
	fw_irq10_init();

	DBG("IRQ15 Initialization");
	fw_irq15_init();

	DBG("LED Initialization");
	fw_led_init();

	DBG("SW Initialization");
	fw_sw_init();

	//__asm volatile( "SETPSW I" );
}
