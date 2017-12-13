/**
 *  @file
 *  @brief      Public symbols for the ClsaMotor module.
 *              This file publishes symbols owned by the ClsaMotor module that cannot be changed by the user.
 *
 *  $Revision: 1.2 $
 *
 *  Copyright 2011 Whirlpool Corporation.  All rights reserved - CONFIDENTIAL.
 *
 */
#ifndef CLSAMOTOR_PUB_H_
#define CLSAMOTOR_PUB_H_

//  --- Include Files -------------------------------------------------------------------------------------------------

// -- This Module --

// -- ANSI/ISO --

// -- Project --


//=====================================================================================================================
//  --- Public Parameters ---------------------------------------------------------------------------------------------
//=====================================================================================================================

/**
 * Output state definition for APL. This becomes one member of the application's Output Sets.
 */
//! \req{CLSA_SR0045}
typedef enum {
    CLSA_OFF,                   //!< CLSA Output State OFF
    CLSA_CW,                    //!< CLSA Output State CW
    CLSA_CCW,                   //!< CLSA Output State CCW
    CLSA_ZONE,                  //!< CLSA Output State ZONE
    CLSA_PARK,                  //!< CLSA Output State PARK
    CLSA_OFF_IGNORE_NEXT_PARK,  //!< HACK value necessary to achieve correct end-of-cycle behavior. Not to be used by any external module.
    CLSA_STATE_REASSERT_ACTION, //!< Upon resumption from Pause, (or upon demand), reassert the active state's outputs.
    CLSA_NUM_OUTPUT_STATES
} CLSA_OUTPUT_STATE_TYPE;


//=====================================================================================================================
//  --- Public Methods ------------------------------------------------------------------------------------------------
//=====================================================================================================================

extern void ClsaMotor__SetClsaOutputState(unsigned char new_output_state);
extern void ClsaMotor__SetZoneStartDeg(unsigned short start);
extern void ClsaMotor__SetZoneStopDeg(unsigned short stop);


#endif  // CLSAMOTOR_PUB_H_
