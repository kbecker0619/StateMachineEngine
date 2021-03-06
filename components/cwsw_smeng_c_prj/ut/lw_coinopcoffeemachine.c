
#include <cvirte.h>					/* inserted by UI generator */
#include <userint.h>				/* inserted by UI generator */
#include "lw_coinopcoffeemachine.h"	/* generated by UI, along w/ the skeleton of this file */

#include "cwsw_lib.h"				/* foundational stuff, used in all my programs */
#include "coinopcoffeemachine.h"	/* point of connection with the main example application */
#include "cwsw_eventsim.h"			/* so we can convert LabWindows UI events to CWSW events */
#include "coinsensor.h"				/* so we can drive the coin sensor object from the UI */


#if 0
int main (int argc, char *argv[])
{
	int panelHandle;
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;	/* out of memory */
	if ((panelHandle = LoadPanel (0, "lw_coinopcoffeemachine.uir", PANEL)) < 0)
		return -1;
	DisplayPanel (panelHandle);
	RunUserInterface ();
	DiscardPanel (panelHandle);
	return 0;
}
#endif

int CVICALLBACK
cbOnCoinInserted (int panel, int control, int event, void *callbackData, int eventData1, int eventData2)
{
	tEventPayload ev = {evNoEvent, 0};
	switch (event)
	{
	case EVENT_COMMIT:
		// pretend to make the coin-insertion sensor to sense an object.
		// Detach in this way, so that we can provide alternate "physical" interfaces
		ev.evId = evCoinInsertionSensed;
		ev.evInt = 25;
		PostEvent(evCoinInsertionSensed, ev);
		break;

	default:
		break;
	}
	return 0;
}

int CVICALLBACK
QuitCallback (int panel, int control, int event, void *callbackData, int eventData1, int eventData2)
{
	switch (event)
		{
		case EVENT_COMMIT:
			QuitUserInterface (0);
			break;
		}
	return 0;
}

int CVICALLBACK
cbOnTimerTic (int panel, int control, int event, void *callbackData, int eventData1, int eventData2)
{
	// for debugging purposes only
	(void)SuspendTimerCallbacks();
	switch (event)
	{
	case EVENT_TIMER_TICK:
		Task(Csws_Sme_Ut);
		break;
	}
	(void)ResumeTimerCallbacks();
	return 0;
}
