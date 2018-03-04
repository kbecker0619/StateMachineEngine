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
#include <stddef.h>		/* ssize_t */
#if defined(_CVI_)
typedef signed int ssize_t;
#endif

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
	return kEvQ_Err_NoError;
}

bool
Cwsw_EvQ__Get_Initialized(void)
{
	return initialized;
}


tEvQ_ErrorCodes
Cwsw_EvQ__InitEvQ(
	tEvQueueCtrl *pEvQueueCtrl,
	tEvQ_EvQueue const pEvQueue,
	uint8_t const EvQueueSz)
{
	// check preconditions, in order of priority
	if(!initialized)				{ return kEvQ_Err_NotInitialized; }		// has component init happened?
	if(!pEvQueueCtrl)				{ return kEvQ_Err_BadCtrl; }			// is control structure valid?
	if(!pEvQueue)					{ return kEvQ_Err_BadQueue; }			// is event buffer valid?
	if(!EvQueueSz)					{ return kEvQ_Err_BadQueue; }			// is event buffer valid?

	pEvQueueCtrl->Queue_Size		= EvQueueSz;
	pEvQueueCtrl->Event_Queue_Ptr	= pEvQueue;
	pEvQueueCtrl->Queue_Count		= 0;
	pEvQueueCtrl->Read_Ptr			= pEvQueue;
	pEvQueueCtrl->Write_Ptr			= pEvQueue;

	return kEvQ_Err_NoError;
}


tEvQ_ErrorCodes
Cwsw_EvQ__FlushEvents(tEvQueueCtrl * const pEvQueueCtrl)
{
	// check preconditions, in order of priority
	if(!initialized)					{ return kEvQ_Err_NotInitialized; }
	if(!pEvQueueCtrl) 					{ return kEvQ_Err_BadCtrl; }
	if(!pEvQueueCtrl->Event_Queue_Ptr)	{ return kEvQ_Err_BadQueue; }
	if(!pEvQueueCtrl->Queue_Size)		{ return kEvQ_Err_BadQueue; }

	pEvQueueCtrl->Read_Ptr = pEvQueueCtrl->Event_Queue_Ptr;
	pEvQueueCtrl->Write_Ptr = pEvQueueCtrl->Event_Queue_Ptr;
	pEvQueueCtrl->Queue_Count = 0;

	return kEvQ_Err_NoError;
}


tEvQ_ErrorCodes
Cwsw_EvQ__PostEvent(tEvQueueCtrl *pEvQueueCtrl, tEvQ_Event ev)
{
	bool isthereroom;
	ssize_t writerange;

	// check preconditions, in order of priority
	if(!initialized)							{ return kEvQ_Err_NotInitialized; }
	if(!pEvQueueCtrl)							{ return kEvQ_Err_BadCtrl; }
	if(!pEvQueueCtrl->Event_Queue_Ptr)			{ return kEvQ_Err_BadQueue; }
	if(!pEvQueueCtrl->Queue_Size)				{ return kEvQ_Err_BadQueue; }
	if(!pEvQueueCtrl->Write_Ptr)				{ return kEvQ_Err_BadCtrl; }

	writerange = pEvQueueCtrl->Write_Ptr - pEvQueueCtrl->Event_Queue_Ptr;
	if(writerange < 0)							{ return kEvQ_Err_BadCtrl; }
	if(writerange >= pEvQueueCtrl->Queue_Size)	{ return kEvQ_Err_QueueFull; }

	isthereroom = (pEvQueueCtrl->Queue_Count < pEvQueueCtrl->Queue_Size);
	if(!isthereroom)							{ return kEvQ_Err_QueueFull; }

	if(!ev)										{ return kEvQ_Err_BadEvent; }

	do {
		int crit = Cwsw_Critical_Protect(0);
		// add the item to the queue
		*( pEvQueueCtrl->Write_Ptr++ ) = ev;

		// adjust the count
		pEvQueueCtrl->Queue_Count++;

		// check for overflow
		if ( pEvQueueCtrl->Write_Ptr > ( pEvQueueCtrl->Event_Queue_Ptr + pEvQueueCtrl->Queue_Size ))
		{
			// reset it to beginning
			pEvQueueCtrl->Write_Ptr = pEvQueueCtrl->Event_Queue_Ptr;
		}
		crit = Cwsw_Critical_Release(crit);
	} while(0);

	return kEvQ_Err_NoError;
}


tEvQ_ErrorCodes
Cwsw_EvQ__GetEvent(tEvQueueCtrl *pEvQueueCtrl, tEvQ_Event *pEv)
{
	tEvQ_Event ev = kEvQ_Ev_None;

	// check preconditions, in order of priority
	if(!initialized)							{ return kEvQ_Err_NotInitialized; }
	if(!pEvQueueCtrl)							{ return kEvQ_Err_BadCtrl; }
	if(!pEvQueueCtrl->Event_Queue_Ptr)			{ return kEvQ_Err_BadQueue; }
	if(!pEvQueueCtrl->Queue_Size)				{ return kEvQ_Err_BadQueue; }
	if(!pEvQueueCtrl->Read_Ptr)					{ return kEvQ_Err_BadCtrl; }

	// are there any entries
	if(pEvQueueCtrl->Queue_Count != 0)
	{
		int crit = Cwsw_Critical_Protect(0);

		// decrement the count
		pEvQueueCtrl->Queue_Count--;

		// get the event/increment the pointer
		ev = *(pEvQueueCtrl->Read_Ptr++);

		// check for overflow
		if(pEvQueueCtrl->Read_Ptr > (pEvQueueCtrl->Event_Queue_Ptr + pEvQueueCtrl->Queue_Size))
		{
			// reset it to beginning
			pEvQueueCtrl->Read_Ptr = pEvQueueCtrl->Event_Queue_Ptr;
		}
		crit = Cwsw_Critical_Release(crit);
	}

	// return the event
	return ev;
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
