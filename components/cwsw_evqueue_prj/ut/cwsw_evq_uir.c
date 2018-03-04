///	==========================================================================
///	@file
///	@brief      : Unit Test & Development Environment for the CWSW Event Queue component.
///
///	Copyright   : Copyright (c) 2018 Kevin L. Becker. All rights reserved.
/// Description : Hello World in C++, Ansi-style
/// ==========================================================================


#include "cwsw_evq_uir.h"

#include "bsp.h"


static int panelHandle;

#if defined(_CVI_)
int main (int argc, char *argv[])
{
	if (InitCVIRTE (0, argv, 0) == 0)									return -1;	/* out of memory */
	if ((panelHandle = LoadPanel (0, "cwsw_evq_uir.uir", PANEL)) < 0)   return -1;
	DisplayPanel (panelHandle);
	RunUserInterface ();
	DiscardPanel (panelHandle);
	return 0;
}
#endif

int CVICALLBACK cbPanel (int panel, int event, void *callbackData,
		int eventData1, int eventData2)
{
	static int initialized = 0;
	switch (event)
	{
	case EVENT_GOT_FOCUS:
		if(!initialized)
		{
			initialized = !Init(BSP);	// BSP__Init().	because in the cwsw world, the bsp depends upon the cwsw lib, initialization of cwsw_lib is done in the bsp init
		}
		break;
	case EVENT_LOST_FOCUS:

		break;
	case EVENT_CLOSE:
		QuitUserInterface (0);
		break;
	default:

		break;
	}
	return 0;
}

int CVICALLBACK cbOnBtnQuit (int panel, int control, int event,
		void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			QuitUserInterface (0);
			break;
	}
	return 0;
}

int CVICALLBACK cbOnBtn (int panel, int control, int event,
		void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:

			break;
	}
	return 0;
}

int CVICALLBACK cbTaskTimer (int panel, int control, int event,
		void *callbackData, int eventData1, int eventData2)
{
	// for debugging purposes only
	(void)SuspendTimerCallbacks();

	if(Get(Cwsw_Bsp, Initialized))
		switch (event)
		{
		case EVENT_TIMER_TICK:
			Task(Evq_Ut);
			break;
		}
	(void)ResumeTimerCallbacks();
	return 0;
}
