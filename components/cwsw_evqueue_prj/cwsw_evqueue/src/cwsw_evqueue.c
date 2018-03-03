/** @file cwsw_evqueue.c
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Mar 1, 2018
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

// ----	Module Headers --------------------------
#include "cwsw_evqueue.h"


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
static char const * const cwsw_evqueue_RevString = "$Revision: 0123 $";

static bool initialized = false;


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

/**	Static initialization of the Event Queue.
 *	This function is intended to be called during the application-initialization
 *	phase, and is only the 1st initialization function that needs to be called.
 * @returns	Error code, where 0 is no error.
 */
uint16_t
Cwsw_EvQ__Init(void)
{
	if( (XPRJ_Debug_Win_MinGW) || (XPRJ_Debug_Linux_GCC) || (XPRJ_Debug_MSC) || (XPRJ_Debug_CVI) )
	{
		#if defined(__GNUC__)	/* --- GNU Environment ------------------------------ */
		#pragma GCC diagnostic push
		#pragma GCC diagnostic ignored "-Wpedantic"
		#endif

		dbg_printf(
				"\tModule ID %i\t%s\t%s\n"
				"\tEntering %s()\n\n",
				Cwsw_EvQ, __FILE__, cwsw_evqueue_RevString,
				__FUNCTION__);

		#if defined(__GNUC__)	/* --- GNU Environment ------------------------------ */
		#pragma GCC diagnostic pop
		#endif
	}
	else
	{
		UNUSED(cwsw_evqueue_RevString);
	}

	initialized = true;
	return kEvQ_NoError;
}

bool
Cwsw_EvQ__Get_Initialized(void)
{
	return initialized;
}


/**	Clear (empty) the event queue.
 *  While there might be a number of reasons why the developer may want to
 *  empty the current queue of all pending events, one important opportunity is
 *  at module initialization.
 *
 *  @param[in,out]	pEvQueue	Pointer to the current event buffer control structure
 *	@returns		Error code, enumeration of type tEvQ_ErrorCodes.
 */
uint16_t
Cwsw_EvQ__FlushEvents(tEvQueueCtrl * const pEvQueue)
{
	if(!pEvQueue) 		{ return kEvQ_BadQueue; }
	if(!initialized)	{ return kEvQ_NotInitialized; }

	pEvQueue->Read_Ptr = pEvQueue->Event_Queue_Ptr;
	pEvQueue->Write_Ptr = pEvQueue->Event_Queue_Ptr;
	pEvQueue->Queue_Count = 0;

	return kEvQ_NoError;
}

uint16_t
Cwsw_EvQ__InitEvQ(
	tEvQueueCtrl *pEvQueueCtrl,
	tEvQ_EvQueue const pEvQueue,
	uint8_t const EvQueueSz)
{
	if(!pEvQueueCtrl)	{ return kEvQ_BadCtrl; }
	if(!pEvQueue)		{ return kEvQ_BadQueue; }
	if(!EvQueueSz)		{ return kEvQ_BadQueue; }
	if(!initialized)	{ return kEvQ_NotInitialized; }

	pEvQueueCtrl->Queue_Size		= EvQueueSz;
	pEvQueueCtrl->Event_Queue_Ptr	= pEvQueue;

	return kEvQ_NoError;
}


#if defined(IN_DOXY)													/* { */
/** A FIFO queue. No prioritization. No restriction on the number of distinc queues, since the
 *	ev queue engine acts on pointers to the queue to be operated on; each queue struct needs to be
 *	initialized independently, and the definition of the events belonging to each queue can be
 *	totally independent; however, this flexibility also reduces the error checking i can do
 *	inside the engine itself.
 *	Because i'm not supremely conscious of data size, i'm making the eventy type to be a U16, though
 *	this is defined in a per-project configuration file and could be a U8 if you're concerned about
 *	size.
 *
 *	dependencies: lib. UT depends on arch, board, but this is not imposed on the evq.
 */
#endif																	/* } */
