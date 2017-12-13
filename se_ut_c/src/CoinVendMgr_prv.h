/** @file CoinVendMgr_prv.h
 *	@brief	Project-specific calibrations to the private (internal) API for the
 *	Coin Vending Manager.
 *
 *	Description:
 *
 *	Copyright (c) 2017 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Feb 2, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef COINVENDMGR_PRV_H_
#define COINVENDMGR_PRV_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define COINVENDMGR_PRV_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

//! Abstraction getter for CLSA Output State.
// expansion of GET(CLSA_OUTPUT_STATE)
#define GET_CLSA_OUTPUT_STATE()                 CVendAct__GetCVendOutputState()
#define CVendAct__GetCVendOutputState()			(1)


#ifdef	__cplusplus
}
#endif

#endif /* COINVENDMGR_PRV_H_ */
