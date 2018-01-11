/*******************************************************************************
  MPLAB Harmony Application Source File

  Company:
    Microchip Technology Inc.

  File Name:
    app.c

  Summary:
    This file contains the source code for the MPLAB Harmony application.

  Description:
    This file contains the source code for the MPLAB Harmony application.  It
    implements the logic of the application's state machine and it may call
    API routines of other MPLAB Harmony modules in the system, such as drivers,
    system services, and middleware.  However, it does not call any of the
    system interfaces (such as the "Initialize" and "Tasks" functions) of any of
    the modules in the system or make any assumptions about when those functions
    are called.  That is the responsibility of the configuration-specific system
    files.
 *******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 *******************************************************************************/
// DOM-IGNORE-END


// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "../../../cwsw_arch/pic32mz/app/app.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    This structure should be initialized by the APP_Initialize function.

    Application strings and buffers are be defined outside this structure.
*/

APP_DATA appData;

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary callback functions.
*/

// Note these are the function names you pass into SYS_TMR_CallbackPeriodic
// Callback function sets the flag to toggle LED1
static void
APP_SysTimerCallback1 (  uintptr_t context, uint32_t  alarmCount )
{
	UNUSED(context);
	UNUSED(alarmCount);
	appData.LED1Toggle = true;
}

// Callback function sets the flag to toggle LED2
static void
APP_SysTimerCallback2 (  uintptr_t context, uint32_t  alarmCount )
{
	UNUSED(context);
	UNUSED(alarmCount);
	appData.LED2Toggle = true;
}


// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************


/* TODO:  Add any necessary local functions.
*/


// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Remarks:
    See prototype in app.h.
 */

void WEAK APP_Initialize ( void )
{
    /* Place the App state machine in its initial state. */
    appData.state = APP_STATE_INIT;


    /* TODO: Initialize your application's state machine and other
     * parameters.
     */
//    appData.sysTimerClientHandle1  = SYS_TMR_HANDLE_INVALID;
//    appData.sysTimerClientHandle2  = SYS_TMR_HANDLE_INVALID;
    appData.LED1Toggle = false;
    appData.LED2Toggle = false;
    appData.startTick = 0; // holds the value of the System Counter at start of period
}

/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */
uint32_t WEAK SYS_TMR_TickCountGet(void) { return 0; }
uint32_t WEAK SYS_TMR_TickCounterFrequencyGet ( void ) { return 0; }
//SYS_TMR_HANDLE SYS_TMR_CallbackPeriodic ( uint32_t periodMs, uintptr_t context, SYS_TMR_CALLBACK   callback ) { UNUSED(periodMs); UNUSED(context); UNUSED(callback); return 0; }
void WEAK APP_Tasks ( void )
{

	if (appData.LED1Toggle == true)  // check if callback changed LED toggle flag
    {
//        PLIB_PORTS_PinToggle(PORTS_ID_0, APP_LED_PORT, APP_LED1_PIN); // toggle LED
        appData.LED1Toggle = false;  // reset LED toggle flag
    }

    if (appData.LED2Toggle == true)
    {
//        PLIB_PORTS_PinToggle(PORTS_ID_0, APP_LED_PORT, APP_LED2_PIN);
        appData.LED2Toggle = false;
    }

    // The following System Timer functions read System Timer values directly.
    // Doing this will consume more PIC32 core cycles vs using the timed callback and
    // delay functions (SYS_TMR_CallbackPeriodic, ..._CallbackSingle, ..._DelayMS).
    if (SYS_TMR_TickCountGet() - appData.startTick >= SYS_TMR_TickCounterFrequencyGet())
    {
        appData.startTick = SYS_TMR_TickCountGet();    // reset start time
//        PLIB_PORTS_PinToggle(PORTS_ID_0, APP_LED_PORT, APP_LED3_PIN);
    }

     /* Check the application's current state. */
    switch ( appData.state )
    {
        /* Application's initial state. */
        case APP_STATE_INIT:
        {
            bool appInitialized = true;
//			appData.sysTimerClientHandle1 = SYS_TMR_CallbackPeriodic(500, 0, APP_SysTimerCallback1);
//            appData.sysTimerClientHandle2 = SYS_TMR_CallbackPeriodic(1000, 0, APP_SysTimerCallback2);

            if (appInitialized)
            {
                appData.state = APP_STATE_IDLE;
            }
            break;
        }

        case APP_STATE_SERVICE_TASKS:
        {

            break;
        }

        /* TODO: implement your application state machine.*/


        /* The default state should never be executed. */
        default:
        {
            /* TODO: Handle error in application's state machine. */
            break;
        }
    }
}



/*******************************************************************************
 End of File
 */
