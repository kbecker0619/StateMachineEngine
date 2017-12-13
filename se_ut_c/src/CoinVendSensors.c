/** @file CoinVendSensors.c
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

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------
#include <string.h>					// memset()

// ----	Project Headers -------------------------
#include "extensions.h"
#include "StateEngine.h"
#include "fsm_extensions.h"
#include "clock_if.h"

// ----	Module Headers --------------------------
#include "CoinVendSensors.h"
#include "CoinVendSensors_prv.h"
#include "CoinVendMgr_prv.h"		/* GET_CLSA_OUTPUT_STATE */


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
static char const * const CoinVendSensors_RevString = "$Revision: 0123 $";

PRIVATE tCVendSnsr_EvQueue CVendSnsr_EvQueue;

//! Position Sensor State Machine Control structure.
PRIVATE tFsmStateControl CVendSnsr_SmControl;


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

PRIVATE tFsmStateTable *GetSensorStateTable(void);

//  --- state functions -----------------------------------
PRIVATE void State_StartupDelay_Entry(void);
PRIVATE void State_StartupDelay_Do(tFsmEvent ev);
PRIVATE void State_StartupDelay_Exit(void);
//  --- guard functions -----------------------------------
//  --- transition actions --------------------------------

//  --- state functions -----------------------------------
PRIVATE void State_WaitRisingEdge_Entry(void);
PRIVATE void State_WaitRisingEdge_Do(tFsmEvent event);
PRIVATE void State_WaitRisingEdge_Exit(void);
//  --- guard functions -----------------------------------
PRIVATE bool   Wfre_QualifyRisingEdge(void);
PRIVATE bool   Wfre_QualifyRisingEdge_Not(void);
//  --- transition actions --------------------------------
PRIVATE void        CalcExpectedFallingEdge(void);
PRIVATE void        Wfre_CalcExpectedRisingEdge(void);

//  --- state functions -----------------------------------
PRIVATE void State_WaitForFallingEdge_Entry(void);
PRIVATE void State_WaitForFallingEdge_Do(tFsmEvent ev);
PRIVATE void State_WaitFallingEdge_Exit(void);
//  --- guard functions -----------------------------------
PRIVATE bool   Wffe_QualifyFallingEdge(void);
PRIVATE bool   Wffe_QualifyFallingEdge_Not(void);
//  --- transition actions --------------------------------
PRIVATE void        Wffe_EndOfRotationActions(void);

/**
 * State transition table for the StartupDelay state.
 */
PRIVATE STATE_EVENT_TYPE STATE_STARTUP_DELAY_EVENTS[] =
{   // exit event           exit guard                  transition action           destination state
    {EV_PS_FALLING_EDGE,    NULL_GUARD_FUNC,            Wffe_EndOfRotationActions,  PS_STATE_WAIT_FOR_RISING_EDGE},
    {EV_PS_NO_EVENT,        NULL_GUARD_FUNC,            NULL_TRANSITION_ACTION,     kCVendSnsr_State_Uninit}                    // End of list
};

/**
 * State transition table for the WaitForRisingEdge state.
 */
PRIVATE STATE_EVENT_TYPE STATE_WAIT_FOR_RISING_EDGE_EVENTS[] =
{   // exit event           exit guard                  transition action               destination state
    {EV_PS_RISING_EDGE,     Wfre_QualifyRisingEdge_Not, NULL_TRANSITION_ACTION,         PS_STATE_WAIT_FOR_RISING_EDGE}, // re-enter
    {EV_PS_FALLING_EDGE,    NULL_GUARD_FUNC,            Wfre_CalcExpectedRisingEdge,    PS_STATE_WAIT_FOR_RISING_EDGE}, // re-enter
    {EV_PS_RISING_EDGE,     Wfre_QualifyRisingEdge,     CalcExpectedFallingEdge,        PS_STATE_WAIT_FOR_FALLING_EDGE},
    {EV_PS_NO_EVENT,        NULL_GUARD_FUNC,            NULL_TRANSITION_ACTION,         kCVendSnsr_State_Uninit}                // End of list
};

/**
 * State transition table for the WaitForFallingEdge state.
 */
PRIVATE STATE_EVENT_TYPE STATE_WAIT_FOR_FALLING_EDGE_EVENTS[] =
{   // exit event           exit guard                      transition action           destination state
    {EV_PS_FALLING_EDGE,    Wffe_QualifyFallingEdge_Not,    NULL_TRANSITION_ACTION,     PS_STATE_WAIT_FOR_FALLING_EDGE}, // re-enter
    {EV_PS_RISING_EDGE,     NULL_GUARD_FUNC,                CalcExpectedFallingEdge,    PS_STATE_WAIT_FOR_FALLING_EDGE}, // re-enter
    {EV_PS_FALLING_EDGE,    Wffe_QualifyFallingEdge,        Wffe_EndOfRotationActions,  PS_STATE_WAIT_FOR_RISING_EDGE},
    {EV_PS_NO_EVENT,        NULL_GUARD_FUNC,                NULL_TRANSITION_ACTION,     kCVendSnsr_State_Uninit}                // End of list
};

/**	Main Position Sensor state machine state table.
 *	\note Because of the way it's typed, this table must follow all of the
 *	individual state-definition arrays. It is not possible to create a forward
 *	reference (i.e., a prototype or declaration) to a const table; const tables
 *	(such as the Exit Event Arrays) must be initialized at point of definition.
 */
PRIVATE tFsmStateTable Clsa_Ps_States[PS_NUM_OP_STATES] =
{   //{State,                           {Entry,                             Do,                             Exit},                          Exit_Events_Array}
    {kCVendSnsr_State_StartupDelay,		{State_StartupDelay_Entry,          State_StartupDelay_Do,          State_StartupDelay_Exit},       STATE_STARTUP_DELAY_EVENTS},
    {PS_STATE_WAIT_FOR_RISING_EDGE,     {State_WaitRisingEdge_Entry,        State_WaitRisingEdge_Do,        State_WaitRisingEdge_Exit},     STATE_WAIT_FOR_RISING_EDGE_EVENTS},
    {PS_STATE_WAIT_FOR_FALLING_EDGE,    {State_WaitForFallingEdge_Entry,    State_WaitForFallingEdge_Do,    State_WaitFallingEdge_Exit},    STATE_WAIT_FOR_FALLING_EDGE_EVENTS}
};


/** Get a pointer to this object's State Machine table.
 *  This function is intended for use primarily by the State Machine Engine. Please, everyone else, avert your eyes.
 *  @return     The state machine table that contains each state, its entry, do and exit routines and its exit event array.
 */
PRIVATE tFsmStateTable *GetSensorStateTable(void)
{
    return (Clsa_Ps_States);
}


// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

void CoinVendSensors_Init(void)
{
	if(NUM_ARRAY_ELEMENTS(CVendSnsr_EvQueue.event_queue) >= kCVendSnsr_Sc_EventQueueSize)
	{
	    (void)memset(&CVendSnsr_EvQueue, 0, sizeof(CVendSnsr_EvQueue));

	    CVendSnsr_SmControl.Last_State        = kCVendSnsr_State_Uninit;
	    CVendSnsr_SmControl.Cur_State         = kCVendSnsr_State_StartupDelay;
	    CVendSnsr_SmControl.Tables_Ptr        = (tFsmStateTable *)GetSensorStateTable();    // cast away const-ness for sake of StateEngine
	    CVendSnsr_SmControl.Event_Queue_Ptr   = CVendSnsr_EvQueue.event_queue;
	    CVendSnsr_SmControl.Queue_Size        = kCVendSnsr_Sc_EventQueueSize;

	    FSM_INIT(CVendSnsr_SmControl);                                    // Init the state machine

		do {
//			tCwswClockTics tmp = GET(POS_SENSOR_FAILED_TIMEOUT);
//			SET(TMR_POS_SENSOR_FAILED, tmp);
		} while(0);
//		Ps_Rotation_Adjustment = 0L;
//		Home_Pos_Adjustment = 0L;
//
//		Ps_Detected_Width_Deg = POS_SNSR_SENSING_REGION_DEG;
	}
}


/**
 * Adjust temporal attributes, and notify interested parties, that we've completed a revolution.
 * There are several things that need to happen at the end of a rotation; for details, see the comments within the
 * function.
 *
 * Our basic approach is to directly update our own variables (which include the position sensor timestamp, the expected
 * arrival time at home, and failures timer), and then notify any other interested parties by throwing a notification.
 */
#include "ClsaMotor_pub.h"			/* CLSA_CW. todo: refactor dependencies */
#include "ClsaPositionSensor_prv.h"	/* GET_POS_SENSOR_FAILED_TIMEOUT. todo: refactor dependencies */
PRIVATE void Wffe_EndOfRotationActions(void)
{
	tCwswClockTics tmp;
	tCwswClockTics now;
	tCwswClockTics old_ps_timestamp;
	tCwswClockTics sensed_width;

    // Update the attributes of this object --------
    now = GET(SYSTEM_TIME);
//    old_ps_timestamp = Ps_Timestamp;
//    sensed_width = now - Ps_Rising_Edge_Timestamp;

    //  1.  Update position sensor timestamp
//    Ps_Timestamp = now - (sensed_width / 2);

    //  2.  Update rotation time.
//    tmp = Ps_Timestamp - old_ps_timestamp;	    // find time since last middle of sensor position
//  tmp -= pos_snsr_rotation_adjustment;		// subtract time paused, spent going backwards, etc.
    if(MSW_32(tmp) != 0)
    {
        // IIRFilter needs a short, we're losing data
        // \todo construct test case for this
//        NOTIFY(UNEXPECTED_DATA_LOSS, tmp);
    }

    #if defined(_MSC_VER)
        #pragma warning(push)
        #pragma warning(disable:4244)   // conversion from 'unsigned long' to 'unsigned short', possible loss of data
        #pragma warning(disable:4242)	// conversion from 'unsigned short' to 'unsigned char', possible loss of data
    #endif

    if( (GET(CLSA_OUTPUT_STATE) == CLSA_CW) || (GET(CLSA_OUTPUT_STATE) == CLSA_CCW) )
    {
        if(tmp <= (tCwswClockTics)GET(POS_SENSOR_FAILED_TIMEOUT))     //!< \req{CLSA_SR0113}
        {
            //! \req{CLSA_SR0117}
            if(tmp > GET(ROTATIONAL_TIME_MIN_MS))
            {
                SET(NV_CLSA_ROTATION_TIME, GET3(FILTERED_ROTATION_TIME, Rot_Time_Extra_Value, (unsigned short)tmp, CLSA_ROTATION_TIME_ALPHA_BITS));
            }
            else
            {
//                NOTIFY(CLSA_PS_INVALID_ROTATION_TIME, tmp);
            }
        }
    }

    Ps_Rotation_Adjustment = 0L;

    //  3.  Update expected home time (use API)
        /*
         * 12/12/2011: GET(HOME_POS_MS) now calculates expected home time on demand, at the cost of a dependency on
         * CLSA_OUTPUT_STATE.
         * So, now at the end of the circle, we'll clear the adjustment value.
         */
    SET(HOME_POS_MS_REL, 0);

    //  4.  Update sensed width running average
    //! \req{CLSA_SR0114}
    NOTIFY(CLSA_PS_DETECTED_WIDTH_UPDATED, Ps_Detected_Width_Deg);   //! hook for partial fulfillment of \req{CLSA_SR0115}

    #if defined(_MSC_VER)
        #pragma warning(pop)
    #endif

    //	5.	Update failure F4E5 timer
    /*
     * Design Note: Selecting between the possible points where we could restart the failure timer:
     *  -   Rising Edge Entry:	rejected: because it's not really de-noised at all, any noise on the line
     *      would restart the timeout, extending the detection period ad infinitum, defeating the ability
     *      to detect failure.
     *      Rising Edge Exit:	rejected: same as Entry.
     *  -   Falling Edge Entry:	rejected: it is essentially the same point in time as Rising Edge Exit.
     *  -   Falling Edge Exit:	selected, primarily because this is the only place where we know that we have
     *      a qualified pulse from the Position Sensor.
     * Design Note: Selecting the starting value of the failure timer:
     *  -   Ps_Timestamp:	        Rejected.
     *  -   Time of Falling Edge:	Selected.  Since there is a small but measurable difference in time between the
     *      center of the time over the sensor, and the moment of the falling edge, but since we don't know the moment
     *      of the center of the time over the sensor until we see a falling edge, there is the possibility of a false
     *      timeout detection, if that timeout happens in that small period between center of sensor and the falling
     *      edge.
     */
    CoinVendSensors__HandlePosSensorTimeoutReset();

    //  6.  Allow other objects to update themselves in reaction to our update
//    NOTIFY(EV_PS_TIMESTAMP_UPDATED, GET(HOME_POS_MS));
}

/**
 * Entry action for the Wait For Falling Edge state.
 */
PRIVATE void State_WaitForFallingEdge_Entry(void)
{
    // tell the (UT) controller where we are
    NOTIFY(EV_STATE_TRANSITION, MAKE_STATE_ENTRY_ACTION_ID(PS_STATE_WAIT_FOR_FALLING_EDGE), 0);

    // provoke entry into do()
    GEN(evCVendSnsr_GoToDoAction);
}

