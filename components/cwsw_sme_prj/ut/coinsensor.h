/** @file coinsensor.h
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2017 Ford Motor Co. All rights reserved.
 *
 *	Original:
 *	Created on: Dec 15, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef UT_COINSENSOR_H_
#define UT_COINSENSOR_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------
#include <stdint.h>

// ----	Project Headers -------------------------
#include "cwsw_lib.h"

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define UT_COINSENSOR_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

// ==== Discrete Functions ================================================== {
extern uint16_t	CoinSensor__Init(void);
extern void		CoinSensor__Task(void);
extern tEvQueueCtrl	*CoinSnsr__Get_EvQueue(void);

// ==== /Discrete Functions ================================================= }

// ==== Targets for Get/Set APIs ============================================ {
#define CoinSnsr__Get(what)		CoinSnsr__Get_ ## what()

// ==== /Targets for Get/Set APIs =========================================== }

//extern void		EventHandler__evCoinInsertionSensed(tNotificationPayload EventData);


#ifdef	__cplusplus
}
#endif

#endif /* UT_COINSENSOR_H_ */
