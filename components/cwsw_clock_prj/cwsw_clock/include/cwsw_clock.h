/** @file
 *	@brief	SMT Clock Module
 *
 *	Description:
 *
 *	Copyright (c) 2017 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Sep 5, 2016
 *	Author: Kevin L. Becker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef SMT_CLOCK_H_
#define SMT_CLOCK_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------
#if (XPRJ_Debug_Win_MinGW) || (XPRJ_DEBUG_MSC) || (XPRJ_DEBUG_CVI)
// defer to Windows. Their clock interface returns units of ms.
#include <time.h>

#else

#endif

// ----	Project Headers -------------------------
#include "cwsw_lib.h"

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================

#if (BUILD_FOR_UNIT_TEST)
#define CWSW_CLOCK_H__REVSTRING "$Revision: 09052016 $"
#endif

/** Unique ID for each and every module */
enum { kModuleiId_Clock = 1 };


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

#if (XPRJ_Debug_Win_MinGW) || (XPRJ_DEBUG_MSC) || (XPRJ_DEBUG_CVI)
/*	building on windows, for windows, we can take advantage of MinGW's
 *	time.h...
 */
typedef clock_t tCwswClockTics;

#else
/*	... else we'll have to create our own.
 */
typedef long tCwswClockTics;

#endif


// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

/**	Clock library init function. Only needs to be called once, probably by main
 *	application (rather than all components which use this core library).
 */
extern uint16_t				Cwsw_Clock__Init(void);

/** Target symbol for Get(Cwsw_Clock, xxx) interface */
#define Get__Cwsw_Clock(a)	Cwsw_Clock__Get_ ## a()

/** Target for Get(Cwsw_Clock, Initialized) interface */
extern bool 				Cwsw_Clock__Get_Initialized(void);


#if (XPRJ_Debug_Win_MinGW) || (XPRJ_DEBUG_MSC) || (XPRJ_DEBUG_CVI)
#define Cwsw__Clock()	(tCwswClockTics)(clock())

#else
extern tCwswClockTics	Cwsw__Clock(void);

#endif

/**	Return the number of ms between start and stop times.
 *	Because we're being simpler than we need to, we're always casting the result to a 
 *  signed long.
 * 	@note We are assuming here that there is 1 clock tic per ms; this is what is
 * 	true for MinGW and so of course that means the whole world does it the same
 * 	way.
 */
#define Cwsw_ElapsedTimeMs(start, stop)			(int32_t)(stop - start)

/**	@returns the time left in said timer.
 *	Negative values indicate expiration of timer.
 *	@param timer - the timer to be looked at.
 *	@note In usage, do not compare one time directly to another.
 *	Doing this will not properly handle timer tic rollover.
 *	Instead, subtract one time from another, and compare the result to zero.
 */
#define Cwsw_GetTimeLeft(timer)					Cwsw_ElapsedTimeMs(Cwsw__Clock(), timer)


/**	Set the duration of a timer.
 *	@param timer - a reference to the specified timer.
 *	@param duration - the duration of the timer. Negative values are not possible.
 */
#define Cwsw_SetTimerVal(ptimer, duration)		do { *ptimer = Cwsw__Clock() + (duration); } while(0)


#ifdef	__cplusplus
}
#endif

#endif /* SMT_CLOCK_H_ */
