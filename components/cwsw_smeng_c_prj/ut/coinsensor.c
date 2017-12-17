/** @file coinsensor.c
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

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------
#include <stdbool.h>

// ----	Project Headers -------------------------
#include "cwsw_lib.h"
#include "cwsw_clock.h"
#if (XPRJ_Debug_Win_MinGW) || (XPRJ_DEBUG_MSC)
#include "clock_if.h"
#endif
#include "cwsw_eventsim.h"

// ----	Module Headers --------------------------
#include "coinsensor.h"


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
static char const * const coinsensor_RevString = "$Revision: 0123 $";
static bool initialized = false;
static bool coindetected = false;
#if (XPRJ_Debug_Win_MinGW) || (XPRJ_DEBUG_MSC)
static tCwswClockTics tmr;
#endif


// ============================================================================
// ----	Private Functions -----------------------------------------------------
// ============================================================================

/** Callback from the hardware driver (or simulation thereof) for when the coin sensor is tripped.
 *	this is public so that i can get to it from the LabWindows/CVI interface file.
 * @param EventData
 */
void
EventHandler__evCoinInsertionSensed(tEventPayload EventData)
{
	UNUSED(EventData);
	coindetected = true;
}


// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

/* this coin sensor is supremely simple. we are not trying go identify coinage, detect fraud, or
 * even differentiate between a wooden nickel and a paper clip and a coin.
 *
 * here, we take an external event, in the form of a notification function within this file, which
 * sets a flag that will be processed by the task function. at this time, we are not going to
 * provide a function to read the current state of the coin sensor, or the accumulated value of all
 * inserted coins, etc; we will send an event when we detect a coin, and that's it.
 */
uint16_t
CoinSensor__Init(void)
{
	UNUSED(coinsensor_RevString);
	initialized = true;
	coindetected = false;	// <<== this could be done as part of a separate 'reset' function.
	#if( (XPRJ_Debug_Win_MinGW) || (XPRJ_DEBUG_MSC) )
	{
		Cwsw_SetTimerVal(&tmr, 50);	// 50 ms from now, do something ...
	}
	#endif
	
	return 0;
}

void
CoinSensor__Task(void)
{
	tEventPayload ev = {evNoEvent, 0};

	cwsw_assert(initialized);

	// ----	read inputs -----------------------------------------------------------------
	#if( (XPRJ_Debug_Win_MinGW) || (XPRJ_DEBUG_MSC) )
	{
		// for now, we'll simulate our own coin insertion. we'll simulate a quarter.
		if(TM(tmr))
		{
			// pretend to make the coin-insertion sensor to sense an object.
			// Detach in this way, so that we can provide alternate "physical" interfaces
			ev.evId = evCoinInsertionSensed;
			ev.evInt = 25;
			PostEvent(evCoinInsertionSensed, ev);

			// reset for a really long time from now
			Cwsw_SetTimerVal(&tmr, 100000);
		}
	}
	#endif


	// ----	process ---------------------------------------------------------------------

	// ----	exert outputs ---------------------------------------------------------------
	if(coindetected)
	{
		coindetected = false;
		ev.evId = evCoinAccepted;
		ev.evInt = 25;	// for now, hard-code for 25 cents
		PostEvent(evCoinAccepted, ev);
	}

}
