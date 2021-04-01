/*!**********************************************************************************************************************
@file encm369_pic18.c                                                                
@brief This file provides core and GPIO functions for the ENCM 369 PIC activities.
------------------------------------------------------------------------------------------------------------------------
GLOBALS
- NONE
CONSTANTS
- NONE
TYPES
- NONE
PUBLIC FUNCTIONS
- 
PROTECTED FUNCTIONS
- 
***********************************************************************************************************************/

#include "configuration.h"

/***********************************************************************************************************************
Global variable definitions with scope across entire project.
All Global variable names shall start with "G_xxBsp"
***********************************************************************************************************************/
/* New variables */




/*--------------------------------------------------------------------------------------------------------------------*/
/* Existing variables (defined in other files -- should all contain the "extern" keyword) */
extern volatile u32 G_u32SystemTime1ms;        /*!< @brief From main.c */
extern volatile u32 G_u32SystemTime1s;         /*!< @brief From main.c */
extern volatile u32 G_u32SystemFlags;          /*!< @brief From main.c */

/***********************************************************************************************************************
Global variable definitions with scope limited to this local application.
Variable names shall start with "Bsp_" and be declared as static.
***********************************************************************************************************************/

/***********************************************************************************************************************
Function Definitions
***********************************************************************************************************************/


/*--------------------------------------------------------------------------------------------------------------------*/
/*! @protectedsection */                                                                                            
/*--------------------------------------------------------------------------------------------------------------------*/



/*!---------------------------------------------------------------------------------------------------------------------
@fn void ClockSetup(void)
@brief Loads all registers required to set up the processor clocks.
Requires:
- NONE
Promises:*/
void ClockSetup(void)
{
 
  
} /* end ClockSetup */


/*!---------------------------------------------------------------------------------------------------------------------
@fn void GpioSetup(void)
@brief Loads registers required to set up GPIO on the processor.
Requires:
- All configurations must match connected hardware.
Promises:
- Output pin for PA31_HEARTBEAT is configured
*/
void GpioSetup(void)
{
    ANSELA = 0x00;
    TRISA = 0x00;
    
  /*Set up DAC1: Vdd and Vss refs, ON, RA2 output */
    DAC1CON = 0xA0; //b'1010 0000'
    
} /* end GpioSetup() */


/*!---------------------------------------------------------------------------------------------------------------------
@fn  void SysTickSetup(void)
@brief Initializes the 1ms and 1s System Ticks off the core timer.
Requires:
- NVIC is setup and SysTick handler is installed
Promises:
- Both global system timers are reset and the SysTick core timer is configured for 1ms intervals
*/
void SysTickSetup(void)
{
  G_u32SystemTime1ms = 0;      
  G_u32SystemTime1s  = 0;   
  
} /* end SysTickSetup() */



/*!---------------------------------------------------------------------------------------------------------------------
@fn void SystemSleep(void)
@brief Puts the system into sleep mode.  
Requires:
- 
 * 
Promises:
- 
*/
void SystemSleep(void)
{    
  
} /* end SystemSleep(void) */

/*--------------------------------------------------------------------------------------------------------------------
 * void TimeXus(INPUT_PARAMETER)
 * Sets Timer0 to count u16Microseconds_
 * 
 * Requires:
 * - Timer0 configured such that each timer tick is 1 microsecond
 * - INPUT_PARAMETER_ is the value in microseconds to timer from 1 to 65535
 * 
 * Promises:
 * - Pre-load TMR0H:L to clock out desired period 
 * - TMR0IF cleared 
 * - Timer0 enabled 
 * */

/*Function takes input from the user and sets the timer to time
 out the requested period*/


/*--------------------------------------------------------------------------------------------------------------------*/
/*! @publicsection */                                                                                            
/*--------------------------------------------------------------------------------------------------------------------*/



/*--------------------------------------------------------------------------------------------------------------------*/
/*! @privatesection */                                                                                            
/*--------------------------------------------------------------------------------------------------------------------*/


/*--------------------------------------------------------------------------------------------------------------------*/
/* End of File */
/*--------------------------------------------------------------------------------------------------------------------*/