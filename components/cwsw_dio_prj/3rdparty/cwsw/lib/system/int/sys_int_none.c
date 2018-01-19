/** @file sys_int_none.c
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

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------
#include "sys_int.h"


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
static char const * const sys_int_none_RevString = "$Revision: 0123 $";


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

/******************************************************************************

  Function:
	void SYS_INT_Initialize ( void )

  Summary:
	Configures and initializes the interrupt sub-system.

  Description:
	This function appropriately configures and initializes the interrupt sub-system
	for the current system design.

  Precondition:
	None.

  Parameters:
	None.

  Returns:
	None.

  Example:
  <code>
  SYS_INT_Initialize();
  </code>

  Remarks:
	This function is not implemented in the System Interrupt library.  It is
	implemented by the board support package (using the processor-specific
	interrupt peripheral library) because it requires knowledge of the specific
	interrupt requirements for each system.
*/
void
SYS_INT_Initialize ( void )
{
	UNUSED(sys_int_none_RevString);
	/* enable the multi vector */
//    PLIB_INT_MultiVectorSelect( INT_ID_0 );
}

