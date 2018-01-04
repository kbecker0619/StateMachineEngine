/** @file
 *	@brief	Interrupt System Service APIs.
 *
 *	Description:
 *	This file contains functions related to the Interrupt System Service for PIC32 devices.
 *
 *
 *	Original:
 *	Created on: Dec 25, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------

// ----	Project Headers -------------------------
#include "../../../../../../cwsw_arch/pic32mz/framework/system/int/sys_int.h"

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Global Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Module-level Variables ------------------------------------------------
// ============================================================================
static char const * const sys_int_pic32c_RevString = "$Revision: 0123 $";


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

/*  Function:
     SYS_INT_PROCESSOR_STATUS  SYS_INT_StatusGetAndDisable ( void )

  Summary:
    Disables interrupts to the processor and return the previous status.

  Description:
    This function disables interrupts to the processor at the top level. This
    function can be called to prevent any source from being able to generate an
    interrupt. It returns the processor status (which includes global interrupt
    status) before disabling the interrupts.

  Remarks:
    See sys_int.h file for more details.
*/
#if !defined(__PIC32)
#define __get_PRIMASK()		(0)
#define __disable_irq()		do {} while(0)
#define __DMB()				do {} while(0)
#endif
SYS_INT_PROCESSOR_STATUS  SYS_INT_StatusGetAndDisable ( void )
{
    SYS_INT_PROCESSOR_STATUS processorStatus;
    (void)(sys_int_pic32c_RevString);

    processorStatus = (SYS_INT_PROCESSOR_STATUS) (__get_PRIMASK() == 0);

    __disable_irq();
	__DMB();

    return processorStatus;
}

/* Function:
    void SYS_INT_StatusRestore ( SYS_INT_PROCESSOR_STATUS processorStatus )

  Summary:
    Restores the processor status.

  Description:
    This function sets the processor status based on the 32 bit value passed as
    a parameter. 0th bit of the status is for Master Interrupt status.

  Remarks:
    See sys_int.h file for more details.
*/
#if !defined(__PIC32)
#define __enable_irq()		do {} while(0)
#endif
void SYS_INT_StatusRestore ( SYS_INT_PROCESSOR_STATUS processorStatus )
{
    if( processorStatus )
    {
		__DMB();
		__enable_irq();
    }
}

