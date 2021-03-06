/** @file
 *	@brief	Header file for the OSAL Basic implementation.
 *
 *	Description:
 *	This file defines the additions or variations to the OSAL base implementation.
 *	Where it is logical or possible to implement an OSAL function in a simple form
 *	without an RTOS being present then the function has been defined here and
 *	implemented either here as an inline or '#define'. Longer functions that are part
 *	of the basic implementation may also be found in the file osal.c
 *	The best way to consider this file is detailing any deviations from the osal.h
 *	definitions OR as the complete implementation of those functions when pretending
 *	to support BASIC operations.
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

#ifndef CWSW_ARCH_PIC32MZ_FRAMEWORK_OSAL_OSAL_IMPL_BASIC_H_
#define CWSW_ARCH_PIC32MZ_FRAMEWORK_OSAL_OSAL_IMPL_BASIC_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------
#include <stdint.h>
#include <stdbool.h>

// ----	Project Headers -------------------------
#include "cwsw_lib.h"
#include "../../../../cwsw_arch/pic32mz/framework/system/tmr/sys_tmr.h"

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define ARCH_PIC32MZ2048EFM_FRAMEWORK_OSAL_OSAL_IMPL_BASIC_H__REVSTRING "$Revision: 0123 $"

#define OSAL_WAIT_FOREVER           (uint16_t) 0xFFFF


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

typedef uint8_t                     OSAL_SEM_HANDLE_TYPE;
typedef uint8_t                     OSAL_MUTEX_HANDLE_TYPE;
typedef uint32_t                    OSAL_CRITSECT_DATA_TYPE;

/* OSAL Result type

  Summary:
    Enumerated type representing the general return value from OSAL functions.

  Description:
    This enum represents possible return types from OSAL functions.

  Remarks:
    These enum values are the possible return values from OSAL functions
    where a standard success/fail type response is required. The majority
    of OSAL functions will return this type with a few exceptions.
*/

typedef enum OSAL_SEM_TYPE
{
    OSAL_SEM_TYPE_BINARY,
    OSAL_SEM_TYPE_COUNTING
} OSAL_SEM_TYPE;

typedef enum OSAL_CRIT_TYPE
{
    OSAL_CRIT_TYPE_LOW,
    OSAL_CRIT_TYPE_HIGH
} OSAL_CRIT_TYPE;

typedef enum OSAL_RESULT
{
    OSAL_RESULT_NOT_IMPLEMENTED = -1,
    OSAL_RESULT_FALSE = 0,
    OSAL_RESULT_TRUE = 1
} OSAL_RESULT;


// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

#define OSAL_SEM_DECLARE(semID)         uint8_t    semID
#define OSAL_MUTEX_DECLARE(mutexID)     uint8_t    mutexID

#define OSAL_ASSERT(test, message)      test

static __inline__ OSAL_RESULT OSAL_SEM_Create(OSAL_SEM_HANDLE_TYPE* semID, OSAL_SEM_TYPE type, uint8_t maxCount, uint8_t initialCount);
static __inline__ OSAL_RESULT OSAL_SEM_Delete(OSAL_SEM_HANDLE_TYPE* semID);
static __inline__ OSAL_RESULT OSAL_SEM_Pend(OSAL_SEM_HANDLE_TYPE* semID, uint16_t waitMS);
static __inline__ OSAL_RESULT OSAL_SEM_Post(OSAL_SEM_HANDLE_TYPE* semID);
static __inline__ OSAL_RESULT OSAL_SEM_PostISR(OSAL_SEM_HANDLE_TYPE* semID);
static __inline__ uint8_t OSAL_SEM_GetCount(OSAL_SEM_HANDLE_TYPE* semID);

static __inline__ OSAL_CRITSECT_DATA_TYPE OSAL_CRIT_Enter(OSAL_CRIT_TYPE severity);
static __inline__ void OSAL_CRIT_Leave(OSAL_CRIT_TYPE severity, OSAL_CRITSECT_DATA_TYPE status);

static __inline__ OSAL_RESULT OSAL_MUTEX_Create(OSAL_MUTEX_HANDLE_TYPE* mutexID);
static __inline__ OSAL_RESULT OSAL_MUTEX_Delete(OSAL_MUTEX_HANDLE_TYPE* mutexID);
static __inline__ OSAL_RESULT OSAL_MUTEX_Lock(OSAL_MUTEX_HANDLE_TYPE* mutexID, uint16_t waitMS);
static __inline__ OSAL_RESULT OSAL_MUTEX_Unlock(OSAL_MUTEX_HANDLE_TYPE* mutexID);

void* OSAL_Malloc(size_t size);
void OSAL_Free(void* pData);

OSAL_RESULT OSAL_Initialize();

static __inline__ const char* OSAL_Name(void);

// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines Group Defintions
// *****************************************************************************
// *****************************************************************************

/* Critical Section group */
// *****************************************************************************
/* Function: OSAL_CRITSECT_DATA_TYPE OSAL_CRIT_Enter(OSAL_CRIT_TYPE severity)
 */
#include "../../../../cwsw_arch/pic32mz/framework/system/int/sys_int.h"
static OSAL_CRITSECT_DATA_TYPE OSAL_CRIT_Enter(OSAL_CRIT_TYPE severity)
{
   if(severity == OSAL_CRIT_TYPE_LOW)
   {
	   return (0);
   }

   /*if priority is set to HIGH the user wants interrupts disabled*/
   return (SYS_INT_StatusGetAndDisable());
}

// *****************************************************************************
/* Function: void OSAL_CRIT_Leave(OSAL_CRIT_TYPE severity, OSAL_CRITSECT_DATA_TYPE status)
 */
static void OSAL_CRIT_Leave(OSAL_CRIT_TYPE severity, OSAL_CRITSECT_DATA_TYPE status)
{
   if(severity == OSAL_CRIT_TYPE_LOW)
      return;
   /*if priority is set to HIGH the user wants interrupts re-enabled to the state
   they were before disabling.*/
   SYS_INT_StatusRestore(status);
}


/* Function: OSAL_RESULT OSAL_SEM_Create(OSAL_SEM_HANDLE_TYPE semID, OSAL_SEM_TYPE type,
                                uint8_t maxCount, uint8_t initialCount)
 */
static OSAL_RESULT __attribute__((always_inline))
OSAL_SEM_Create(OSAL_SEM_HANDLE_TYPE *semID, OSAL_SEM_TYPE type, uint8_t maxCount, uint8_t initialCount)
{
	OSAL_CRITSECT_DATA_TYPE IntState;
	UNUSED(maxCount);

	IntState = OSAL_CRIT_Enter(OSAL_CRIT_TYPE_HIGH);

	if (type == OSAL_SEM_TYPE_COUNTING)
		*semID = initialCount;
	else
		*semID = 1;

	OSAL_CRIT_Leave(OSAL_CRIT_TYPE_HIGH,IntState);

	return OSAL_RESULT_TRUE;
}


/* Function: OSAL_RESULT OSAL_SEM_Delete(OSAL_SEM_HANDLE_TYPE semID)
 */
static OSAL_RESULT __attribute__((always_inline))
OSAL_SEM_Delete(OSAL_SEM_HANDLE_TYPE *mutexID)
{
	UNUSED(mutexID);
	return (OSAL_RESULT_TRUE);
}

// *****************************************************************************
/* Function: OSAL_RESULT OSAL_SEM_Pend(OSAL_SEM_HANDLE_TYPE semID, uint16_t waitMS)
 */
static  OSAL_RESULT __attribute__((always_inline))
OSAL_SEM_Pend(OSAL_SEM_HANDLE_TYPE *semID, uint16_t waitMS)
{
	OSAL_CRITSECT_DATA_TYPE IntState;
	UNUSED(waitMS);

	IntState = OSAL_CRIT_Enter(OSAL_CRIT_TYPE_HIGH);

	if (*semID > 0)
	{
		(*semID)--;
		OSAL_CRIT_Leave(OSAL_CRIT_TYPE_HIGH,IntState);

		return OSAL_RESULT_TRUE;
	}

	OSAL_CRIT_Leave(OSAL_CRIT_TYPE_HIGH,IntState);

	return OSAL_RESULT_FALSE;
}

// *****************************************************************************
/* Function: OSAL_RESULT OSAL_SEM_Post(OSAL_SEM_HANDLE_TYPE semID)
 */
static OSAL_RESULT __attribute__((always_inline)) OSAL_SEM_Post(OSAL_SEM_HANDLE_TYPE* semID)
{
   OSAL_CRITSECT_DATA_TYPE IntState;

   IntState = OSAL_CRIT_Enter(OSAL_CRIT_TYPE_HIGH);
   (*semID)++;
   OSAL_CRIT_Leave(OSAL_CRIT_TYPE_HIGH,IntState);

   return OSAL_RESULT_TRUE;
}

// *****************************************************************************
/* Function: OSAL_RESULT OSAL_SEM_PostISR(OSAL_SEM_HANDLE_TYPE semID)
 */
static OSAL_RESULT __attribute__((always_inline)) OSAL_SEM_PostISR(OSAL_SEM_HANDLE_TYPE* semID)
{
    (*semID)++;
    return OSAL_RESULT_TRUE;
}

// *****************************************************************************
/* Function: uint8_t OSAL_SEM_GetCount(OSAL_SEM_HANDLE_TYPE semID)
 */
static uint8_t __attribute__((always_inline)) OSAL_SEM_GetCount(OSAL_SEM_HANDLE_TYPE* semID)
{
    return *semID;
}

// *****************************************************************************
/* Function: OSAL_RESULT OSAL_MUTEX_Create(OSAL_MUTEX_HANDLE_TYPE mutexID)
 */
static OSAL_RESULT __attribute__((always_inline)) OSAL_MUTEX_Create(OSAL_MUTEX_HANDLE_TYPE* mutexID)
{
   *mutexID = 1;
   return OSAL_RESULT_TRUE;
}

// *****************************************************************************
/* Function: OSAL_RESULT OSAL_MUTEX_Delete(OSAL_MUTEX_HANDLE_TYPE mutexID)
 */
static OSAL_RESULT __attribute__((always_inline))
OSAL_MUTEX_Delete(OSAL_MUTEX_HANDLE_TYPE *mutexID)
{
	UNUSED(mutexID);
	return (OSAL_RESULT_TRUE);
}

// *****************************************************************************
/* Function: OSAL_RESULT OSAL_MUTEX_Lock(OSAL_MUTEX_HANDLE_TYPE mutexID, uint16_t waitMS)
 */
static OSAL_RESULT __attribute__((always_inline))
OSAL_MUTEX_Lock(OSAL_MUTEX_HANDLE_TYPE *mutexID, uint16_t waitMS)
{
	UNUSED(waitMS);

    if (*mutexID == 1)
    {
        *mutexID = 0;
        return OSAL_RESULT_TRUE;
    }
    return OSAL_RESULT_FALSE;
}

// *****************************************************************************
/* Function: OSAL_RESULT OSAL_MUTEX_Unlock(OSAL_MUTEX_HANDLE_TYPE mutexID)
 */
static OSAL_RESULT __attribute__((always_inline)) OSAL_MUTEX_Unlock(OSAL_MUTEX_HANDLE_TYPE* mutexID)
{
    *mutexID = 1;
    return OSAL_RESULT_TRUE;
}

// Miscellaneous functions
// *****************************************************************************
/* Function: void* OSAL_Malloc(size_t size)
 */
#define OSAL_Malloc(size)                               (malloc(size))

// *****************************************************************************
/* Function: void OSAL_Free(void* pData)
 */
#define OSAL_Free(pData)                                (free(pData))

// Initialization and Diagnostics
// *****************************************************************************
/* Function: OSAL_RESULT OSAL_Initialize()
 */
#define OSAL_Initialize()


// *****************************************************************************
/* Function: const char* OSAL_Name()
 */
static const char* __attribute__((always_inline)) OSAL_Name(void)
{
   return((const char*) "BASIC");
}


#ifdef	__cplusplus
}
#endif

#endif /* CWSW_ARCH_PIC32MZ_FRAMEWORK_OSAL_OSAL_IMPL_BASIC_H_ */
