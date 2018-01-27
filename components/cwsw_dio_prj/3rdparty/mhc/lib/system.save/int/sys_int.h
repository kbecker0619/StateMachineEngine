/** @file sys_int.h
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Dec 25, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef ARCH_PIC32MZ2048EFM_FRAMEWORK_INT_SYS_INT_H_
#define ARCH_PIC32MZ2048EFM_FRAMEWORK_INT_SYS_INT_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------
#include <stdint.h>		/* klb: uint32-t */

// ----	Project Headers -------------------------
#include "system_config/system_config.h"
#include "system/common/sys_common.h"
#include "system/common/sys_module.h"

#if defined(__PIC32C__)
#include "system/int/sys_int_pic32c.h"
#else
#include "int/plib_int.h"
#endif


// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define ARCH_PIC32MZ2048EFM_FRAMEWORK_INT_SYS_INT_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

/* Interrupt Processor Status

  Summary:
    CPU Processor status

  Description:
    This data type holds the status of CPU register 2

  Remarks:
    None.
*/
typedef  uint32_t SYS_INT_PROCESSOR_STATUS;


// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

/*  Function:
     SYS_INT_PROCESSOR_STATUS  SYS_INT_StatusGetAndDisable ( void )

  Summary:
    Disables interrupts to the processor and return the previous status.

  Description:
    This function disables interrupts to the processor at the top level. This
    function can be called to prevent any source from being able to generate an
    interrupt. It returns the processor status (which includes global interrupt
    status and Interrupt Priority status) before disabling the interrupts.

  Precondition:
    SYS_INT_Initialize must have been called.

  Parameters:
    None.

  Returns:
    - SYS_INT_PROCESSOR_STATUS - 32 bit value holding the processor status
                                 before disabling the interrupt

  Example:
    <code>
    SYS_INT_PROCESSOR_STATUS  processorStatus;

    // Save the processor status (which includes global interrupt status)
    // and Disable the global interrupts
    processorStatus = SYS_INT_StatusGetAndDisable();

    {
        // Do something critical
    }

    // set the processor status back to the one which was there before
    // disabling the global interrupt
    SYS_INT_StatusRestore(processorStatus);
    </code>

  Remarks:
    Previous Master interrupt status can be found by checking 0th bit of the
    returned value.

    This function should be paired with the use of SYS_INT_StatusRestore().
    The value returned from this function should be passed into
    SYS_INT_StatusRestore() function.
*/

SYS_INT_PROCESSOR_STATUS  SYS_INT_StatusGetAndDisable ( void );

/* Function:
    void SYS_INT_StatusRestore ( SYS_INT_PROCESSOR_STATUS processorStatus )

  Summary:
    Restores the processor status.

  Description:
    This function sets the processor status based on the 32 bit value passed as
    a parameter. 0th bit of the status is for Master Interrupt status.

  Precondition:
    None.

  Parameters:
   processorStatus - value returned from previous call to
                     SYS_INT_StatusGetAndDisable().

  Returns:
    None.

  Example:
    <code>
    SYS_INT_PROCESSOR_STATUS processorStatus;

    processorStatus = SYS_INT_GetStateAndDisable();
    {
        // do some critical work
    }
    SYS_INT_StatusRestore(processorStatus);
    </code>

  Remarks:
    This function should be paired with the use of SYS_INT_GetStateAndDisable().
    The value returned from SYS_INT_GetStateAndDisable() should be passed into
    this function.
*/
extern void SYS_INT_StatusRestore ( SYS_INT_PROCESSOR_STATUS processorStatus );


#ifdef	__cplusplus
}
#endif

#endif /* ARCH_PIC32MZ2048EFM_FRAMEWORK_INT_SYS_INT_H_ */
