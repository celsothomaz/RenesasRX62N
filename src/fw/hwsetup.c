/******************************************************************************
* DISCLAIMER

* This software is supplied by Renesas Technology Corp. and is only 
* intended for use with Renesas products. No other uses are authorized.

* This software is owned by Renesas Technology Corp. and is protected under 
* all applicable laws, including copyright laws.

* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES
* REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, 
* INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
* PARTICULAR PURPOSE AND NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY 
* DISCLAIMED.

* TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS 
* TECHNOLOGY CORP. NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE 
* FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES 
* FOR ANY REASON RELATED TO THE THIS SOFTWARE, EVEN IF RENESAS OR ITS 
* AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.

* Renesas reserves the right, without notice, to make changes to this 
* software and to discontinue the availability of this software.  
* By using this software, you agree to the additional terms and 
* conditions found by accessing the following link:
* http://www.renesas.com/disclaimer
******************************************************************************
* Copyright (C) 2008. Renesas Technology Corp., All Rights Reserved.
*******************************************************************************	
* File Name	: hwsetup.c
* Version	  : 1.00
* Description  : Power up hardware initializations
******************************************************************************
* History : DD.MM.YYYY Version Description
*		 : 15.02.2010 1.00	First Release
******************************************************************************/


/******************************************************************************
Includes   <System Includes> , "Project Includes"
******************************************************************************/
#include "fw_config.h"

// #include "lcd.h" Uncomment this if an LCD is present.

/******************************************************************************
Typedef definitions
******************************************************************************/

/******************************************************************************
Macro definitions
******************************************************************************/

/******************************************************************************
Imported global variables and functions (from other files)
******************************************************************************/

/******************************************************************************
Exported global variables and functions (to be accessed by other files)
******************************************************************************/

/******************************************************************************
Private global variables and functions
******************************************************************************/

/******************************************************************************
* Function Name: HardwareSetup
* Description  : This function does initial setting for CPG port pins used in
*			  : the Demo including the MII pins of the Ethernet PHY connection.
* Arguments	: none
* Return Value : none
******************************************************************************/
void HardwareSetup(void)
{

	PORT0.DDR.BYTE = 0x00 ;     // Port 0: inputs (IRQ's from ethernet & WiFi)
	PORT1.DDR.BYTE = 0x00 ;     // Port 1: inputs (IIC and USB settings will override these later)
	PORT2.DDR.BYTE = 0x1A ;     // Port 2: USB signals
	PORT3.DDR.BYTE = 0x04 ;     // Port 3: JTAG (P30, P31, P34), CAN (P32=Tx, P33=Rx), NMI (P35)

	PORT5.DDR.BYTE = 0x3B ;     // Port 5: Audio (P55,P54), BCLK (P53), SCI (P52=Rx, P50=Tx), LCD-RS (P51)


	PORTC.DR.BYTE = 0xF7 ;      // Port C: Chip selects, clock = high; IO reset = low (not reset, needed by Ether PHY)
	PORTC.DDR.BYTE = 0x7F ;     // Port C: SPI (PC0-2, PC4-7), IO reset (PC3)                


}


