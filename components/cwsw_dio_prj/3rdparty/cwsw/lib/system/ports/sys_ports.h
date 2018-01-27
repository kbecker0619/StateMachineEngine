/** @file sys_ports.h
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

#ifndef SYS_PORTS_H_
#define SYS_PORTS_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define SYS_PORTS_H__REVSTRING "$Revision: 0123 $"


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
	void SYS_PORTS_Initialize()

  Summary:
	Initializes PORT Pins/Channels.
	<p><b>Implementation:</b> Static/Dynamic</p>

  Description:
	This function initializes different port pins/channels to the desired state.
	It also remaps the pins to the desired specific function.

  Precondition:
	None.

  Parameters:
	None.

  Returns:
	None.

  Example:
	<code>

	SYS_PORTS_Initialize();

	</code>

  Remarks:
	This API must be be called at the time of system initialization to
	initialize the ports pins.
*/
extern void SYS_PORTS_Initialize(void);


#ifdef	__cplusplus
}
#endif

#endif /* SYS_PORTS_H_ */
