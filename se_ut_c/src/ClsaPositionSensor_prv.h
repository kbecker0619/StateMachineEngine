/**
 *  @file
 *  @brief      Private parameters for the ClsaPositionSensor module.
 *
 *  $Revision: 1.9 $
 *
 *  Copyright 2011 Whirlpool Corporation.  All rights reserved - CONFIDENTIAL.
 */
#ifndef CLSAPOSITIONSENSOR_PRV_H_
#define CLSAPOSITIONSENSOR_PRV_H_

// -- This Module --

// -- ANSI/ISO --

// -- Project --
#include "AplFixed.h"               /* GetConfigShort() */
#include "../../src/DishLibrary/System/Exception/Exception.h"              /* CLSA_EXCEPT_LOG() */
#include "../../src/Library/Lsi/Lsi/Lsi.h"                    /* DI_CLSA_SENSOR */
#include "../../src/SRSource/DishLibrary/System/IirFilter/IIRFilter.h"              /* IIRFilter(), IIRFilterLong() */



//=====================================================================================================================
//  --- Private Parameters --------------------------------------------------------------------------------------------
//=====================================================================================================================

//! \req{CLSA_SR0011}
//! \req{CLSA_SR0112}
//  expansion of GET(CLSA_POS_SENSOR_DEG)
#define GET_CLSA_POS_SENSOR_DEG()       AplFixed__GetConfigShort(APL_CLSA_SENSOR_POS)

/**
 *  The design width of the Position Sensor sweet spot.
 *  The CLSA spec (as of rev A.18) does not yet define this value, so the value we come up with, will be determined
 *  empirically.
 *  Given nominal rotation = 6.0s / rev, this is 360 degrees in 6 seconds, or 60 degrees / second (16 2/3 ms per degree).
 *
 *  Be aware, a 5% change in rotational speed can result in change to the expected falling edge that causes the
 *  qualification of a valid pulse to fail. For example, if the actual rotational speed is +5%, then the expected time
 *  of the next rising edge would be -300ms (5700 ms).  We don't presently qualify on the expected time of the rising
 *  edge, but if (when) we do impose that qualification, it will be a factor.
 *
 *  However, we do qualify the "pulse width".  If the design width of the sensing region is 10 degrees, then at nominal
 *  rotational speed the expected falling edge would be calculated to be 167 ms after the rising edge was seen, but if
 *  the rotational speed is +5%, then the actual falling edge would be at about 158 ms.  If the tolerance attached to
 *  the sensing region is too tight, it would be easy to fail because of this 9 ms difference between expected and
 *  actual.
 *
 *  \req{CLSA_SR0076}
 *  \req{CLSA_SR0077}
 *  \req{CLSA_SR0078}
 *  \req{CLSA_SR0082}
 *  \req{CLSA_SR0080}
 *  \req{CLSA_SR0081}
 */
enum { POS_SNSR_SENSING_REGION_DEG = 9 };  // based on desktop debugging w/ live unit, no water or enclosure.

/**
 *  The tolerance of the design width of the Position Sensor sweet spot.
 *  As this is not specified by the CLSA spec, pick an empirical value here.  For now, 33% of nominal.
 *  \req{CLSA_SR0083}
 *  \req{CLSA_SR0084}
 */
#define POS_SNSR_REGION_TOL_MS          MAX(1, (POS_SNSR_SENSING_REGION_MS / 3))    /* trick is, to get the tolerance wide enough to still qualify when the arm initially spins faster-than-nominal by such a margin as to make it hard to find a good value */


/**
 * The value required by our IIR library in order to achieve the required 1/8 filtering value when the rotation time is
 * updated.
 * \req{CLSA_SR0015}   Rotational Speed, CW Calibration Update
 * \req{CLSA_SR0104}   Rotational Speed, CCW Calibration Update
 */
enum { CLSA_ROTATION_TIME_ALPHA_BITS = 3 };


/**
 * Value used for rejection of rotational times that are too short.
 * \req{CLSA_SR0118}
 */
#define GET_ROTATIONAL_TIME_MIN_MS()    (SYS_TMR_TYPE)((SYS_TMR_TYPE)GET_NV_CLSA_ROTATION_TIME() * 7L / 8L)


//=====================================================================================================================
//  --- Private Methods -----------------------------------------------------------------------------------------------
//=====================================================================================================================

//! expansion of GET3(FILTERED_ROTATION_TIME)
#define GET3_FILTERED_ROTATION_TIME(hires, newval, alphabits)        \
        IIRFilterLong(&(hires), (unsigned short)(newval), (alphabits))

#define GET3_FILTERED_SNSR_WIDTH(hires, newval, alphabits)           \
        IIRFilter(&(hires), (unsigned short)(newval), (alphabits))

/*
 * symbols for GET/SET macros:
 * STATE_EVENT_CNV_CLSA_ROTATION_TIMEOUNT	- Number of events in this state machine's event queue
 * POS_SENSOR_FAILED_TIMEOUT	            - Number of milliseconds of grace to see the qualified position sensor.
 * POS_SENSOR_DEG                           - Write only (read in Clsa_pkg.h)
 *
 * timers
 * TMR_POS_SENSOR_FAILED		            - missing-position-sensor-sensed timer
 */

//! expansion of GET(STATE_EVENT_COUNT)
#define GET_STATE_EVENT_COUNT_PS()			StateEngine__GetEventCount(&Ps_Sm_Control)

#define GET_DI_CLSA_SENSOR()                (BOOL_TYPE)Lsi__GetDigitalInput(DI_CLSA_SENSOR)


//! Abstraction getter for CLSA Output State.
// expansion of GET(CLSA_OUTPUT_STATE)
#define GET_CLSA_OUTPUT_STATE()             ClsaMotor__GetClsaOutputState()


/**
 * Retrieve from APL, the designated position for Park.
 * \req{CLSA_SR0064}
 * Expansion of GET(CLSA_PARK_POS_DEG)
 */
#define GET_CLSA_PARK_POS_DEG()             AplFixed__GetConfigShort(APL_CLSA_PARK_POS)

/**
 * Return the Sensor Timeout value in relative milliseconds.
 * \req{CLSA_SR0111}
 * Expansion of GET(POS_SENSOR_FAILED_TIMEOUT)
 */
#define GET_POS_SENSOR_FAILED_TIMEOUT()		(GET_NV_CLSA_ROTATION_TIME() * 3)	/* can't get "GET(NV_CLSA_ROTATION_TIME)" to work */


/**
 * @{
 * Mutator for NV Rotation Time.
 * In this iteration, we are only saving one value, used for both rotational directions.
 * \todo Implement CCW storage & associated behavior.
 * \req{CLSA_SR0105}
 * \req{CLSA_SR0106}
 */
//  Expansion of SET(NV_CLSA_ROTATION_TIME, val)
#define SET_NV_CLSA_ROTATION_TIME(a)		    do{Non_Volatile.NV_Clsa_Rotation_Time_CW = (a);}while(0)
//! @}


// --------------------------------------------------------------------------------------
/*
 * Set expiration times for various timers.
 * macro expansion for SET(<timer>)
 */
//! \req{CLSA_SR0100}
#define SET_TMR_POS_SENSOR_FAILED(TimeInMs)     /*lint -e{835} A zero has been given as right argument to operator '+' */   \
                                                do{Tmr_Pos_Sensor_Failed = GET_SYSTEM_TIME() + (TimeInMs);}while(0)

/*
 * Get time left in various timers.
 * Macro expansion of GET(<timer>)
 */
#define GET_TMR_POS_SENSOR_FAILED()             /*lint -e{713} Loss of precision (assignment) (unsigned int to short) */    \
                                                /*lint -e{732} Loss of sign (initialization) (long to unsigned long)  */    \
                                                SysTime__GetTimerVal(Tmr_Pos_Sensor_Failed)


//=====================================================================================================================
//  --- Private Methods -----------------------------------------------------------------------------------------------
//=====================================================================================================================

//  === Notification macros =================================================================================

#if defined(UT_ENVIRONMENT) || defined(_lint)
#else

/**
 * Notify interested parties that the position sensor failed qualification because the falling edge came too soon.
 */
#define NOTIFY__CLSA_PS_QUALIFY_FAIL_EARLY(ms_early)                CLSA_EXCEPT_LOG(CLSA_EXCPT_FALL_EDGE_TOO_SOON, (unsigned short)(ms_early))

/**
 * Notify interested parties that the position sensor failed qualification because the falling edge came too late.
 */
#define NOTIFY__CLSA_PS_QUALIFY_FAIL_LATE(ms_late)                  CLSA_EXCEPT_LOG(CLSA_EXCPT_FALL_EDGE_TOO_LATE, (unsigned short)(ms_late))

/**
 * Notify interested parties that the detected width of the position sensor has been udpated.
 * Partial fulfillment of \req{CLSA_SR0115}
 */
#define NOTIFY__CLSA_PS_DETECTED_WIDTH_UPDATED(width_in_deg)       CLSA_EXCEPT_LOG(CLSA_EXCPT_PS_DETECTED_WIDTH, (width_in_deg))

/**
 * Log an invalid rotation time.
 * Exception log can only show a short, but that should handle most values seen for this.
 */
#define NOTIFY__CLSA_PS_INVALID_ROTATION_TIME(rot_time)             CLSA_EXCEPT_LOG(CLSA_EXCPT_ROTATION_TIME, (unsigned short)(rot_time))

/*! Some sort of data loss happened, log some representation of it. */
#define NOTIFY__UNEXPECTED_DATA_LOSS(a)                             CLSA_EXCEPT_LOG(CLSA_EXCPT_UNEXPECTED_DATA_LOSS, (unsigned short)(a))

/*! Log the lost event */
#define NOTIFY__CLSA_PS_STATE_EVENT_QUEUE_FULL(lost_event)          CLSA_EXCEPT_LOG(CLSA_EXCPT_EVENT_QUEUE_FULL, (lost_event))
#endif


#endif  // CLSAPOSITIONSENSOR_PRV_H_
