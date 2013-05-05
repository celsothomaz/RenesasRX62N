/*
 * fw_eth.c
 *
 *  Created on: 25/04/2013
 *      Author: celso
 */

#include "sw_config.h"

void fw_eth_init(void){

	SYSTEM.MSTPCRB.BIT.MSTPB15 = 0;

	PORTA.DR.BIT.B3 = 0;
	PORTA.DR.BIT.B4 = 0;
	PORTA.DR.BIT.B5 = 0;
	PORTA.DDR.BIT.B3 = 1;
	PORTA.DDR.BIT.B4 = 1;
	PORTA.DDR.BIT.B5 = 1;

	PORTB.DR.BIT.B0 = 0;
	PORTB.DR.BIT.B1 = 0;
	PORTB.DR.BIT.B2 = 0;
	PORTB.DR.BIT.B3 = 0;
	PORTB.DR.BIT.B4 = 0;
	PORTB.DR.BIT.B5 = 0;
	PORTB.DR.BIT.B6 = 0;
	PORTB.DR.BIT.B7 = 0;
	PORTB.DDR.BIT.B0 = 0;
	PORTB.DDR.BIT.B1 = 0;
	PORTB.DDR.BIT.B2 = 0;
	PORTB.DDR.BIT.B3 = 0;
	PORTB.DDR.BIT.B4 = 1;
	PORTB.DDR.BIT.B5 = 1;
	PORTB.DDR.BIT.B6 = 1;
	PORTB.DDR.BIT.B7 = 0;

	// Ethernet settings
	IOPORT.PFENET.BYTE = 0x82;  // Enable Ether poins, RMII mode, enable LINKSTA
	PORTA.ICR.BIT.B5 = 1;       // ET_LINKSTA
	PORTA.ICR.BIT.B3 = 1;       // ET_MDIO
	PORTB.ICR.BIT.B0 = 1;       // RMII_RXD1
	PORTB.ICR.BIT.B1 = 1;       // RMII_RXD0
	PORTB.ICR.BIT.B2 = 1;       // REF50CLK
	PORTB.ICR.BIT.B3 = 1;       // RMII_RX_ER
	PORTB.ICR.BIT.B7 = 1;       // RMII_CRS_DV

	//EDMAC.EDMR.BIT.SWR = 1;

	//ETHERC.ECSR.BIT.ICD = 1;
	//ETHERC.ECSR.BIT.MPD = 1;
	//ETHERC.ECSR.BIT.LCHNG = 1;
	//ETHERC.ECSR.BIT.PSRTO = 1;
	//ETHERC.ECSR.BIT.BFR = 1;

	//ICU.IPR[0x08].BIT.IPR = 10; //Set priority level

	//EDMAC.EESIPR.BIT.FRIP = 1;
	//EDMAC.EESIPR.BIT.TCIP = 1;

	//ETHERC.RFLR.LONG = 1518;

	//ETHERC.IPGR.BIT.IPG = 0x14;

	/* EDMAC */
	//EDMAC.EESR.LONG = 0x47FF0F9F;				/* Clear all ETHERC and EDMAC status bits */

	//EDMAC.TRSCER.LONG = 0x00000000;				/* Copy-back status is RFE & TFE only   */
	//EDMAC.TFTR.LONG = 0x00000000;				/* Threshold of Tx_FIFO */
	//EDMAC.FDR.LONG = 0x00000000;				/* Transmit fifo & receive fifo is 256 bytes */
	//EDMAC.RMCR.LONG = 0x00000003;				/* Receive function is normal mode(continued) */
	//ETHERC.ECMR.BIT.PRM = 0;					/* Ensure promiscuous mode is off. */

	/* Enable the interrupt... */
	//_IEN( _ETHER_EINT ) = 1;
	//_IR (_ETHER_EINT) = 0;

}

void fw_eth_handle(void) {

	_IR (_ETHER_EINT) = 0;
}

void fw_eth_setMAC(char addr0, char addr1, char addr2, char addr3, char addr4, char addr5){

	/* Set the MAC address into the ETHERC */
	ETHERC.MAHR = 	( ( unsigned long ) addr0 << 24UL ) |
					( ( unsigned long ) addr1 << 16UL ) |
					( ( unsigned long ) addr2 << 8UL ) |
					( unsigned long ) addr3;

	ETHERC.MALR.BIT.MA = ( ( unsigned long ) addr4 << 8UL ) |
						 ( unsigned long ) addr5;

}

