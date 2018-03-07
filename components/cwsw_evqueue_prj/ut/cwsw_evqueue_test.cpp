///	==========================================================================
///	@file
///	@brief      : Unit Test & Development Environment for the CWSW Event Queue component.
///
///	Copyright   : Copyright (c) 2018 Kevin L. Becker. All rights reserved.
/// Description : Hello World in C++, Ansi-style
/// ==========================================================================

#include <iostream>
using namespace std;

#include "projcfg.h"
#include "cwsw_lib.h"

#include "bsp.h"


int main() {
//	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	(void) Init(BSP);		// BSP__Init().	because in the cwsw world, the bsp depends upon the cwsw lib, initialization of cwsw_lib is done in the bsp init

	Task(Evq_Ut);			// Evq_Ut__Task()

	return 0;
}
