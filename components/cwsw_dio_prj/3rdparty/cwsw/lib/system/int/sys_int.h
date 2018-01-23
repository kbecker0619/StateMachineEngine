/** @file
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Jan 16, 2018
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef SYS_INT_H_
#define SYS_INT_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------

// ----	Project Headers -------------------------
#include "cwsw_lib.h"

// ----	Module Headers --------------------------
#include "system/int/sys_int_mapping.h"


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define SYS_INT_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

/* Function:
    void SYS_INT_Initialize ( void )

  Summary:
    Configures and initializes the interrupt subsystem.

  Description:
    This  function configures and initializes the interrupt subsystem
    appropriately for the current system design.

  Precondition:
    None.

  Parameters:
    None.

  Returns:
    None.

  Example:
  <code>
  // Initialize the interrupt system. This needs to done in the initialization
  // code.
  SYS_INT_Initialize();
  </code>

  Remarks:
    None.
*/
extern void SYS_INT_Initialize ( void );


#ifdef	__cplusplus
}
#endif

#endif /* SYS_INT_H_ */
