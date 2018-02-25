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

#ifndef CWSW_CLOCK_H_
#define CWSW_CLOCK_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------
#if (XPRJ_Debug_Win_MinGW) || (XPRJ_Debug_MSC) || (XPRJ_Debug_CVI)
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


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

#if (XPRJ_Debug_Win_MinGW) || (XPRJ_Debug_MSC) || (XPRJ_Debug_CVI)
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

// ==== Discrete Functions ================================================== {

/** Initialization for the Clock Services component.
 *	This function's responsibility is to set up the local vars, and manage the
 *	necessary HW, to prepare for the task function's 1st call (once the
 *	scheduler has been started).
 *
 *	This function "connects" the HW clock features provided by the Arch and
 *	Board components. It knows nothing about the application.
 *
 *	This function shall be called before the main scheduler is started.
 *
 *	As general guidance, the CWSW Library component should have been initialized
 *	before this function is called (since this module depends on the library),
 *	though this is not a strict requirement.
 *
 *	@returns error code, or 0 for no problem (i.e., success).
 */
extern uint16_t									Cwsw_Clock__Init(void);

/** Target for Get(Cwsw_Clock, Initialized) interface */
extern bool 									Cwsw_Clock__Get_Initialized(void);


#if (XPRJ_Debug_Win_MinGW) || (XPRJ_Debug_MSC) || (XPRJ_Debug_CVI)
#define Cwsw__Clock()							(tCwswClockTics)(clock())

#else
extern tCwswClockTics	Cwsw__Clock(void);

#endif

// ==== /Discrete Functions ================================================= }

// ==== Targets for Get/Set APIs ============================================ {

/** "Chapter Designator" for Get/Set API.
 *	Intentionally unused symbol, designed to get you to the correct starting point, when you want
 *	to find macros for the Get/Set API; simply highlight the Module argument in your IDE (e.g,
 *	Eclipse, NetBeans, etc.), and select Go To Definition.
 */
enum { Cwsw_Clock = 3 };	/* Generic architecture for all supported boards */


/** Target symbol for Get(Cwsw_Clock, xxx) interface */
#define Get__Cwsw_Clock(resource)				Cwsw_Clock__Get_ ## resource()


/**	Return the number of ms between start and stop times.
 *	Because we're being simpler than we need to, we're always casting the result to a
 *  signed long.
 * 	@note We are assuming here that there is 1 clock tic per ms; this is what is
 * 	true for MinGW and so of course that means the whole world does it the same
 * 	way.
 */
#define Cwsw_ElapsedTimeMs(start, stop)			(int32_t)(stop - start)


/**	Get the time left before timer maturation.
 *	@returns the time left in said timer; Negative values indicate expiration of timer.
 *	@param timer[in] - the timer to be looked at.
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


/**	Get the current system time, in ms.
 */
//  Expansion of GET(SYSTEM_TIME)
#define GET_SYSTEM_TIME()             			(Cwsw__Clock())


/**	Determine if timer "a" has expired (i.e., matured) or not.
 *	@param[in]	a name of timer
 *	@return  Boolean where TRUE indicates the timer has indeed expired.
 */
//  Expansion of HAS_TIMER_EXPIRED(TIMER_NAME)
//! @{
#define HAS_TIMER_EXPIRED(a)        		    _HAS_TIMER_EXPIRED(a)
#define _HAS_TIMER_EXPIRED(a)       		    (Cwsw_GetTimeLeft(a) <= 0)
//! @}


/**	Has a timer expired?
 *	This definition provided to accommodate UML notation.
 */
#define TM(tmr)                         HAS_TIMER_EXPIRED(tmr)

// ==== /Targets for Get/Set APIs =========================================== }

#ifdef	__cplusplus
}
#endif

#endif /* CWSW_CLOCK_H_ */
