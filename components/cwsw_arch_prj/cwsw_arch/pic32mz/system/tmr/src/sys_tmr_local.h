/** @file
 *	@brief	Timer System Service local declarations and definitions.
 *
 *	Description:
 *	This file contains the Timer System Service local declarations and definitions.
 *
 *
 *	@note	This file is an as-needed COPY of the file created by Microchip's Harmony Configurator,
 *	v2.04, and/or the tool-created support files (e.g., Peripheral Libs) supplied as part of the
 *	MHC eco system. We have NO intention of stealing code or technology, or of claiming undue
 *	credit. This file is here ONLY during the buildup of support for the PIC32 MZ2048 EFM 144
 *	Starter Kit, what we call the "MZ EZ" board. Eventually, I hope to link directly to Harmony's
 *	code, in a way that allows different target architectures
 *
 *	Anyway, because this is a copy of code generated by a tool owned by Microchip, there is
 *	attribution here but no copyright notice.
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

#ifndef SYS_TMR_LOCAL_H_
#define SYS_TMR_LOCAL_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

// ----	Project Headers -------------------------
#include "system_config.h"
#include "sys_tmr.h"
#include "system/common/sys_common.h"
#include "osal/osal.h"
#include "driver/driver_common.h"		/* klb: DRV_HANDLE */

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define SYS_TMR_LOCAL_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

/* SYS TMR OBJECT INSTANCE structure

  Summary:
    System Timer object instance structure.

  Description:
    This data type defines the System Timer object instance.

  Remarks:
    None.
*/
typedef struct
{
    /* Driver Module index */
    SYS_MODULE_INDEX                    drvIndex;

    /* Client Handle */
    DRV_HANDLE                          driverHandle;

    /* The status of the SYS TMR Module */
    SYS_STATUS                          status;

    /* System timer operating frequency, ticks per second */
    uint32_t                            sysTickFreq;

    /* Number of ticks for each tick interrupt: SYS_TMR_UNIT_RESOLUTION/sysTickFreq */
    uint32_t                            sysTickUnitCount;

    /* Current system tick counter. Increments ONCE every tick! */
    volatile uint32_t                   sysTickCount;

    /* Previous system tick count processed. Try to adjust for
     * lost signals */
    volatile uint32_t                   sysTickPrevCount;

    /* keep an 32 bit MSB for the sysTickCount to avoid overflow */
    volatile uint32_t                   sysTickCountHigh;

    /* Underlying timer driver operating frequency */
    uint32_t                            driverFreq;

    /* Underlying timer driver divider period */
    uint32_t                            driverPeriod;

    /* Do not start polling before we receive the first alarm */
    bool                                alarmReceived;

    /* user threads protection semaphore */
    OSAL_SEM_HANDLE_TYPE                userSem;

} SYS_TMR_OBJECT;


/* Timer client

  Summary
    Defines the structure required for managing a client timer object

  Description
    This defines the structure required for managing a client timer object.

  Remarks:
    Useful calculations, translations:
    - F = sysTickFreq; U = SYS_TMR_UNIT_RESOLUTION; UC = U/F (unit count);

    - ms -> ticks;          ticks = (ms x F)/1000;
    - ms -> units;          units = ticks x UC = ((ms x F)/1000) x UC -> (ms x U)/1000;
    - units -> ms;          ms    = (units x 1000) / (F x UC) -> (units x 1000)/U;
*/
typedef struct
{
    /* object is in use, busy, etc. SYS_TMR_CLIENT_STATE value */
    /* written by the threads, read by threads, ISR */
    int8_t                              currState;

    /* enables ISR routine action on this client */
    uint8_t                             isrEnable;

    /* state written by the ISR, read by the threads. SYS_TMR_CLIENT_ISR_STATE */
    uint8_t                             isrState;

    /*  object flags. SYS_TMR_CLIENT_FLAGS */
    union
    {
        uint8_t         val;
        struct
        {
            uint8_t     periodic:   1;  // periodic object; periodic object are persistent
            uint8_t     auto_del:   1;   // auto delete non-periodic object
        };
    } flags;

    /* The current client tick unit count. When it reaches 0 the client alarm expired */
    int32_t                             tuCount;

    /* The client update tick unit rate */
    int32_t                             tuRate;

    /* Give this back with callback function. */
    uintptr_t                           context;

    /* Event callback */
    SYS_TMR_CALLBACK                    callback;

} SYS_TMR_CLIENT_OBJECT;


// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================


#ifdef	__cplusplus
}
#endif

#endif /* SYS_TMR_LOCAL_H_ */
