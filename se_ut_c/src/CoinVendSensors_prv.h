/** @file CoinVendSensors_prv.h
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2017 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Jan 25, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef COINVENDSENSORS_PRV_H_
#define COINVENDSENSORS_PRV_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------

// ----	Project Headers -------------------------
#include "extensions.h"		// XPRJ_Debug
#include "StateEngine.h"	// tFsmEvent

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define COINVENDSENSORS_PRV_H__REVSTRING "$Revision: 0123 $"

/**
 * Position Sensor operating states per design documents.
 * The names of these elements should correlate directly to those found in the state chart diagram.
 */
enum eCoinVendSnsrOpStates {
    kCVendSnsr_State_Uninit,                //!< Uninitialized, doesn't actually exist and is not seen in design documents.

    kCVendSnsr_State_StartupDelay,
    PS_STATE_WAIT_FOR_RISING_EDGE,
    PS_STATE_WAIT_FOR_FALLING_EDGE,

    PS_NUM_OP_STATES                //!< Number of states in the Position Sensor state machine.
};


/**	Events for the Position Sensor state machine.
 */
enum eCoinVendSnsrEvents {
    EV_PS_NO_EVENT,                 //!< Position Sensor "No Event" event, needed by this version of StateEngine

    EV_PS_RISING_EDGE,              //!< Transition-provoking event, we have seen a (generic) Rising Edge of the Position Sensor input.
    EV_PS_FALLING_EDGE,             //!< Transition-provoking event, we have seen a (generic) Falling Edge of the Position Sensor input.
    evCVendSnsr_GoToDoAction,       //!< Special event, specific to this version of the StateEngine and our usage of it, designed to transition from a state's Entry action to the same state's Do action within the same instance of the background task.

    kCVendSnsr_NumStateChartEvents	//!< Number of Position Sensor state chart events.
};


//!  Size of event queue for the Coin Vendor Sensor state machine.
enum { kCVendSnsr_Sc_EventQueueSize = 5 };


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

/**	Event queue for the CLSA state machines.
 *	In the Unit Test environment, there are guards on either side to address a concern about the State Engine's
 *	Post-Event functionality. We need data to prove or disprove the existence of a buffer-bounds violation.
 */
typedef struct {
#if (XPRJ_Debug)
    unsigned short  lowguard;
#endif
    tFsmEvent      event_queue[kCVendSnsr_Sc_EventQueueSize];
#if (XPRJ_Debug)
    unsigned short  higuard;
#endif
} tCVendSnsr_EvQueue;

typedef enum eCoinVendSnsrOpStates CLSAPS_SC_TYPE;
typedef enum eCoinVendSnsrEvents tCVendSnsr_Event;


// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

/* Module-level symbols for GET/SET macros:
 * STATE_EVENT_CNV_CLSA_ROTATION_TIMEOUNT	- Number of events in this state machine's event queue
 * POS_SENSOR_FAILED_TIMEOUT	            - Number of milliseconds of grace to see the qualified position sensor.
 * POS_SENSOR_DEG                           - Write only (read in Clsa_pkg.h)
 *
 * timers
 * TMR_POS_SENSOR_FAILED		            - missing-position-sensor-sensed timer
 */

//! expansion of GET(STATE_EVENT_COUNT)
#define GET_STATE_EVENT_COUNT_SNSR()		Fsm__GetEventCount(&CVendSnsr_SmControl)


#ifdef	__cplusplus
}
#endif

#endif /* COINVENDSENSORS_PRV_H_ */
