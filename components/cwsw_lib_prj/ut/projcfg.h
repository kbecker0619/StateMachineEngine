/** @file projcfg.h
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2017 Ford Motor Co. All rights reserved.
 *
 *	Original:
 *	Created on: Sep 4, 2016
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef PROJCFG_H_
#define PROJCFG_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------
#include <stdbool.h>	/* true, false - for preprocessor usage */
#include <stdio.h>		/* __FILE__, etc. */

// ----	Project Headers -------------------------
#include "ctassert.h"

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define PROJCFG_H__REVSTRING "$Revision: 09042016 $"


#if !defined(XPRJ_PC_Windows_Debug)
#define	XPRJ_PC_Windows_Debug	(false)
#endif


/*	Allow for the possibility that USE_SIMULATED_EVENTS might be a command-line
 *	define. Pick reasonable defaults if not defined.
 */
#if !defined(USE_SIMULATED_EVENTS)
#define USE_SIMULATED_EVENTS			(true)

#else
#endif


/*	Allow for the possibility that BUILD_FOR_UNIT_TEST might be a command-line
 *	define. Pick reasonable defaults if not defined.
 */
#if !defined(BUILD_FOR_UNIT_TEST)
	#if defined(XPRJ_Debug_Linux) || defined(XPRJ_Debug_Win_MinGW)
		#define BUILD_FOR_UNIT_TEST		(true)

	#else
		#define BUILD_FOR_UNIT_TEST		(false)

	#endif
#endif


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

//	=== dev-on-PC API =========================================================

#if defined(__GNUC__)	/* --- GNU Environment ------------------------------ */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wvariadic-macros"
#else

#endif

#if (BUILD_FOR_UNIT_TEST)
/*	per https://gcc.gnu.org/onlinedocs/cpp/Variadic-Macros.html, variadics used
 *	as i'm using them here, will break on a non-GNU compiler. buyer beware.
 */
#define	dprintf(format, args...)	(void)printf(format , ## args)

/*	within eclipse mars, on windows, using mingw, it seems that stdout
 *	buffering is broken. the advice i've found is to disable said
 *	buffering. this is supposed to do that.
 *
 *	the alternative would be to directly open a console window. this
 *	involves changing .gdbinit and is described at
 *	http://stackoverflow.com/questions/13035075/printf-not-printing-on-console
 *	and
 *	https://mirlab.wordpress.com/2014/02/23/no-console-output-in-eclipse-with-cdt-in-windows/
 */
#define disable_console_buffering()	setvbuf(stdout, NULL, _IONBF, 0)

/**	when built on a PC, it's likely i want to see module elements that we would
 *	otherwise want to keep secret.
 */
#define PRIVATE						/* nothing */

#else
#define dprintf(format, args...)	do {} while(0)
#define disable_console_buffering()	do {} while(0)


/**	when built on a PC, it's likely i want to see module elements that we would
 *	otherwise want to keep secret.
 */
#define PRIVATE						static

#endif

#if defined(__GNUC__)	/* --- /GNU Environment ----------------------------- */
#pragma GCC diagnostic pop
#endif

// define specifically for Eclipse CDT parser
#ifdef __CDT_PARSER__
  #define __BASE_FILE__ __FILE__
#endif


#ifdef	__cplusplus
}
#endif

#endif /* PROJCFG_H_ */
