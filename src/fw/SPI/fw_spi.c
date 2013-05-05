/*
 * fw_spi.c
 *
 *  Created on: 14/04/2013
 *      Author: celso
 */

#include "fw_config.h"

void fw_spi_init(void){
	long i = 0;

	//Enable SPI0
	MSTP(RSPI0) = 0; //Stop mode state is canceled

	//PORT C DDR
	PORTC.DDR.BIT.B0 = 1; //An output pin
	PORTC.DDR.BIT.B1 = 1; //An output pin
	PORTC.DDR.BIT.B2 = 1; //An output pin
	PORTC.DDR.BIT.B3 = 1; //An output pin
	PORTC.DDR.BIT.B4 = 1; //An output pin
	PORTC.DDR.BIT.B5 = 1; //An output pin
	PORTC.DDR.BIT.B6 = 1; //An output pin
	PORTC.DDR.BIT.B7 = 0; //An input pin

	//PORT 5 DDR
	PORT5.DDR.BIT.B1 = 1; //An output pin

	//PORT C DR
	PORTC.DR.BIT.B0 = 1; //An output pin
	PORTC.DR.BIT.B1 = 1; //An output pin
	PORTC.DR.BIT.B2 = 1; //An output pin
	PORTC.DR.BIT.B3 = 1; //An output pin
	PORTC.DR.BIT.B4 = 1; //An output pin
	PORTC.DR.BIT.B5 = 1; //An output pin
	PORTC.DR.BIT.B6 = 1; //An output pin
	PORTC.DR.BIT.B7 = 0; //An input pin

	//PORT 5 DR
	PORT5.DR.BIT.B1 = 0; //An output pin

	//PFGSPI register
	IOPORT.PFGSPI.BIT.RSPIS = 0; //PC as the SPI-A
	IOPORT.PFGSPI.BIT.RSPCKE = 1; //RSPCKA pin is enable
	IOPORT.PFGSPI.BIT.MOSIE = 1; //MOSIA pin is enable
	IOPORT.PFGSPI.BIT.MISOE = 1; //MISOA pin is enable
	IOPORT.PFGSPI.BIT.SSL0E = 0; //SSL0A pin is disable
	IOPORT.PFGSPI.BIT.SSL1E = 0; //SSL1A pin is disable
	IOPORT.PFGSPI.BIT.SSL2E = 0; //SSL2A pin is disable
	IOPORT.PFGSPI.BIT.SSL3E = 0; //SSL3A pin is disable

	//SPPCR register
	RSPI0.SPPCR.BIT.SPLP = 0; //Disable loopback mode
	RSPI0.SPPCR.BIT.SPLP2 = 0; //Disable loopback mode
	RSPI0.SPPCR.BIT.SPOM = 0; //CMOS output
	RSPI0.SPPCR.BIT.MOIFV = 0; //MOSI idle fixed value equal 0
	RSPI0.SPPCR.BIT.MOIFE = 0; //MOSI output value equal final data from previous transfer

	//SPBR register
	//Determine base frequency of operation
	//With 0 and BRDV can this options of frequency:
	//BRDV = 0 => 24MHz
	//BRDV = 1 => 12MHz
	//BRDV = 2 => 6MHz
	//BRDV = 3 => 3MHz
	RSPI0.SPBR = 0x0;

	//SPDCR register
	RSPI0.SPDCR.BIT.SPFC = 0; //Number of frames
	RSPI0.SPDCR.BIT.SLSEL = 0; //SSL0 to SSL3 as output
	RSPI0.SPDCR.BIT.SPRDTD = 0; //SPDR values are read from the receive buffer
	RSPI0.SPDCR.BIT.SPLW = 0; //SPDR is accessed in words

	//SPCKD register
	RSPI0.SPCKD.BIT.SCKDL = 0; //1 RSPCK delay for clock

	//SSLND register
	RSPI0.SSLND.BIT.SLNDL = 0; //1 RSPCK delay for slave select negation

	//SPND register
	RSPI0.SPND.BIT.SPNDL = 0; //1 RSPCK + 2 PCLK delay for next-access

	//SPCR2 register
	RSPI0.SPCR2.BIT.SPPE = 0; //Parity disable
	RSPI0.SPCR2.BIT.SPOE = 0; //Parity mode
	RSPI0.SPCR2.BIT.SPIIE = 0; //Disable idle interrupt
	RSPI0.SPCR2.BIT.PTE = 0; //Disable the self-diagnostics of the parity circuit

	//SPCMOD0 register (Graphic display)
	RSPI0.SPCMD0.BIT.CPHA = 0; //Data sampling on odd edge, data variation on even edge
	RSPI0.SPCMD0.BIT.CPOL = 0; //RSPCK = 0 when idle
	RSPI0.SPCMD0.BIT.BRDV = 0; //Bit Rate = 3MHz (according with SPBR register)
	RSPI0.SPCMD0.BIT.SSLA = 0; //SSL3-A for graphic display
	RSPI0.SPCMD0.BIT.SSLKP = 0; //Negative all SSL signals upon completion of transfer
	RSPI0.SPCMD0.BIT.SPB = 7; //Data length = 8bits
	RSPI0.SPCMD0.BIT.LSBF = 0; //MSB first
	RSPI0.SPCMD0.BIT.SPNDEN = 0; //Disable next-access delay
	RSPI0.SPCMD0.BIT.SLNDEN = 0; //Disable SSL negation delay
	RSPI0.SPCMD0.BIT.SCKDEN = 0; //An RSPCK delay of 1 RSPCK

	//SPCR register
	RSPI0.SPCR.BIT.SPMS = 1; //SPI operation (four-wire)
	RSPI0.SPCR.BIT.TXMD = 0; //Full-duplex operation
	RSPI0.SPCR.BIT.MODFEN = 0; //Disable detection of mode fault error
	RSPI0.SPCR.BIT.MSTR = 1; //Master mode
	RSPI0.SPCR.BIT.SPEIE = 0; //Disable error interrupt requests
	RSPI0.SPCR.BIT.SPTIE = 1; //Disable transmit interrupt requests
	RSPI0.SPCR.BIT.SPE = 1; //Enable RSPI function
	RSPI0.SPCR.BIT.SPRIE = 0; //Disable receive interrupt requests

	//SSLP register
	RSPI0.SSLP.BIT.SSLP0 = 1; //SSL0 signal is 1 active
	RSPI0.SSLP.BIT.SSLP1 = 1; //SSL1 signal is 1 active
	RSPI0.SSLP.BIT.SSLP2 = 1; //SSL2 signal is 1 active
	RSPI0.SSLP.BIT.SSLP3 = 1; //SSL3 signal is 1 active

	//SPSCR register
	RSPI0.SPSCR.BIT.SPSLN = 0; //RSPI sequence

	FW_RESET_IO = 1;
	for (i=0;i<1000000;i++);
	FW_RESET_IO = 0;
	for (i=0;i<1000000;i++);

}

unsigned short fw_spi_send_short(unsigned short cmd){
	while (RSPI0.SPSR.BIT.IDLNF);

	RSPI0.SPDR.WORD.L = 0;
	RSPI0.SPDR.WORD.H = cmd;

	//Wait for transfer complete
	while (RSPI0.SPSR.BIT.IDLNF);

	(void)RSPI0.SPDR.WORD.H;
	return RSPI0.SPDR.WORD.L;
}
