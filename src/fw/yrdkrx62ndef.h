
/******************************************************************************
* DISCLAIMER
* Please refer to http://www.renesas.com/disclaimer
******************************************************************************
  Copyright (C) 2008. Renesas Technology Corp., All Rights Reserved.
*******************************************************************************
* File Name    : rsksh7216.h
* Version      : 1.00
* Description  : RSK 7216 board specific settings
******************************************************************************
* History : DD.MM.YYYY Version Description
*         : 06.10.2009 1.00    First Release
******************************************************************************/

#ifndef RDKRX62N_H
#define RDKRX62N_H

/******************************************************************************
Includes   <System Includes> , "Project Includes"
******************************************************************************/

/******************************************************************************
Typedef definitions
******************************************************************************/

/******************************************************************************
Macro definitions
******************************************************************************/

#define     CMT0_CLK_SELECT (512)

#define 	SET_BIT_HIGH	(1)
#define 	SET_BIT_LOW		(0)
#define 	SET_BYTE_HIGH	(0xFF)
#define 	SET_BYTE_LOW	(0x00)

/* Define switches to be polled if not available as interrupts */
#define		SW_ACTIVE		FALSE
#define     SW1             PORT4.PORT.BIT.B0
#define     SW2             PORT4.PORT.BIT.B1
#define     SW3             PORT4.PORT.BIT.B2
#define     SW1_DDR         PORT4.DDR.BIT.B0
#define     SW2_DDR         PORT4.DDR.BIT.B1
#define     SW3_DDR         PORT4.DDR.BIT.B2
#define     SW1_ICR         PORT4.ICR.BIT.B0
#define     SW2_ICR         PORT4.ICR.BIT.B1
#define     SW3_ICR         PORT4.ICR.BIT.B2



/******************************************************************************
Variable Externs
******************************************************************************/

/******************************************************************************
Functions Prototypes
******************************************************************************/



/* RDKRX62N_H */
#endif		

