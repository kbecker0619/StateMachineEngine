/** @file cwsw_lib.h
 *	@brief	API for CWSW Library.
 *
 *	Description:
 *
 *	Copyright (c) Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Jun 4, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef CWSW_LIB_H_
#define CWSW_LIB_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------
#include <stdint.h>		/* standard integer type definitions */
#include <stdbool.h>	/* bool */

// ----	Project Headers -------------------------
#include "projcfg.h"

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define SQSP_LIB_H__REVSTRING "$Revision: 0123 $"

/** Unique ID for each and every module */
enum { kModuleiId_Lib = 0 };


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

/* ==== A WORD ABOUT BUILD TARGETS ============================================
 *	Within Eclipse, the configuration is available as an IDE variable named
 *		"${ConfigName}"
 *	This can be put into a command-line define, for use in the code itself;
 *	within this project's settings, this is done by defining
 *		"XPRJ_${ConfigName}"
 *
 *	Use by preprocessor code such as
 *		"#if defined(XPRJ_Debug)"
 *
 *	Note the name of this define is specifically chosen for cross-platform
 *	Compatibility, for example with MPLAB X.
 *
 *	Within the NetBeans IDE used by MPLAB X, the equivalent mechanism is to
 *	detect off the command-line define "XPRJ_<config>",
 *		"#if defined(XPRJ_Debug)"
 *
 *	Note the name of the default configuration created by MPLAB X' New Project
 *	wizard is "default" - if you want a configuration named "Debug", you need to
 *	create it.
 *
 *	Within my development environment, I let Eclipse' New Project Wizard create
 *	its standard Debug and Release configurations, then create new ones for on-
 *	target debugging, as required. I assume my Windows/Linux Debug configuration
 *	is also intended for unit tests, so I rather indiscriminently print things
 *	to the console.
 * ========================================================================= */

/* Configuration Check */
#if defined(XPRJ_Debug)
/* This configuration is created by Eclipse; we do not want it used, unless ... */
#if (XPRJ_Debug == 99)
#pragma message "Building Within Atmel Studio"

#else
#error This configuration reserved for Atmel Studio
#endif

#elif defined(XPRJ_Release)
/* This configuration is created by Eclipse; we do not want it used */
#error For now, do not build with the "Release" build target active

#elif defined(XPRJ_Debug_Linux) || defined(XPRJ_Debug_Linux_Desktop)
/* This is the configuration intended for development & debugging in a Linux VM */
/* The 1st is intended to debug on a PowerPC Target from a Linux development environment */
/* The 2nd (Desktop) is intended for building within S32DS on Linux for a Linux debugging session */

#elif defined(XPRJ_Debug_Win_MinGW)
/* This is the configuration intended for development on Windows, using the MinGW tool suite */

#elif defined(XPRJ_Debug_Cx_AtmelSamv71)
/* This configuration is intended for the Atmel SAMV71 Xplained Ultra board */

#else
#error Must define Eclipse symbol XPRJ_${ConfigName}

#endif


/**	Macro to designate a function as weakly bound.
 *	This allows a project to define a default function that can be overridden by
 *	a specific implementation. Note not all compilers support this, so on projects
 *	that rely on this, you'll need to figure out a work-around.
 */
#if !defined(WEAK)
#if defined (__GNUC__)		/* GCC CS3 2009q3-68 */
#define WEAK __attribute__ ((weak))

#elif defined (__CC_ARM  )	/* Keil µVision 4 */
#define WEAK __attribute__ ((weak))

#elif defined (__ICCARM__)	/* IAR Ewarm 5.41+ */
#define WEAK __weak

#else
#error Unrecognized or unsupported compiler

#endif
#endif


/* Define WEAK attribute */


/*	===	definitions common to all environments ================================
 */

/**	Macro to allow (for example) the use of enumeration names in a string. */
#define TO_STRING(x)	#x

/**	Extract the low-order byte out of a 16-bit word. */
#define LSB_16(word16)	(uint8_t)((uint16_t)word16 & (uint8_t)0xFF)

/**	Extract the high-order byte out of a 16-bit word. */
#define MSB_16(word16)	(uint8_t)(((uint16_t)word16 / 256U) & (uint8_t)0xFF)


/**	Determine if "a" is in between values "low" and "hi", inclusive.
 *	@note This macro is not safe, in that it evaluates one or more arguments
 *	more than once.
 */
#define IN_RANGE(val, low, hi)	(((val) <= (low)) && ((val) >= (hi)))


#define BIT_TEST(mem, bit)		((mem)&(1<<(bit)))
#define BIT_SET(mem, bit)		((mem)|=(1<<(bit)))
#define BIT_CLR(mem, bit)		((mem)&=~(1<<(bit)))
#define BIT_TOGGLE(mem, bit)	((mem)^=(1<<(bit)))


/** Determine the number of elements in a table */
#define TABLE_SIZE(table)		(sizeof(table) / sizeof(table[0]))


//! Return the maximum value of two parameters.
//! When available, this macro should be an alias for the compiler-supplied version.
//! This version is provided for compilers that do not provide an intrinsic version.
//! \note This version is \b UNSAFE in that it has side effects (it evaluates one or more arguments more than once)
#if defined(_MSC_VER)
    // msvc has max/min in stdlib, gnuc evidently doesn't
    #define MAX(a, b)	max(a, b)

#else
    #define MAX(a, b)   (((a) > (b)) ? (a) : (b))

#endif

//! Return the minimum value of two parameters.
//! When available, this macro should be an alias for the compiler-supplied version.
//! This version is provided for compilers that do not provide an intrinsic version.
//! \note This version is \b UNSAFE in that it has side effects (it evaluates one or more arguments more than once)
#if defined(_MSC_VER)
    // msvc has max/min intrinsics in stdlib, gnuc evidently doesn't
    #define MIN(a, b)   min(a, b)

#else
    #define MIN(a, b)   (((a) < (b)) ? (a) : (b))

#endif


/**	Eliminate compiler and static-checker warnings about an unused function
 *	parameter.
 */
#if !defined(UNUSED)
#define UNUSED(x) (void)x
#endif


/**	Abstract module initialization.
 *	The intention is, all modules use the same signature for their init
 *	function, so make it more obvious to the code maintainer that we're
 *	using a standardized (template) init function.
 *
 *	There is a 2-layer expansion because it is possible the argument could of
 *	itself be a macro; for example, if the module source, header, and function
 *	prefixes were all the same, and so a macro was defined to represent that
 *	module.
 */
#define Init(instance)	_INIT(instance)
#define _INIT(instance)	instance ## __Init()
typedef uint16_t (*fpInit)(void);


/**	Module task function.
 */
#define Task(instance)	_TASK(instance)
#define _TASK(instance)	instance ## __Task()
typedef void (*fpTask)(void);


/**	NON-PRODUCTION interface to "get" an internal variable.
 *	This is designed to be a sort of extension of the Init(module) and
 *	Task(module) API; in the same way, you "Get(module, attribute)".
 */
#define Get(component, resource)	_GET(component, resource)
#define _GET(component, resource)	Get__ ## component(resource)

#define GET(item)				_GET1(item)
#define _GET1(thing)			GET_ ## thing()


/**	Pre-configured "module" named "Dbg" (Debug) for use with the above Get() API.
 *	To use this, you will need to create a symbol in your module that looks
 *	like "Get_Dbg_resource()". if you want this to be a macro, fine, or a "real"
 *	function, hey, roll with it.
 */
#define Get_Dbg(resource)			_get_debug(resource)
#define _get_debug(resource)		Get_Dbg_ ## resource()


/**	Is specified condition true?
 *	@return #TRUE if condition is true, #FALSE otherwise.
 */
#define IS(cond)                (bool)(GET(cond) != false)


/*	=== dev-on-PC API =========================================================
 */
#if defined(__GNUC__)	/* --- GNU Environment ------------------------------ */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wvariadic-macros"
#else

#endif

#if (XPRJ_Debug_Win_MinGW)
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
#error no
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


/**	Core library init function. Only needs to be called once, probably by main
 *	application (rather than all components which use this core library).
 */
extern uint16_t Cwsw_Lib__Init(void);

#include <assert.h>
#define cwsw_assert(a)		assert(a)
#define Get__Cwsw_Lib(a)	Cwsw_Lib__Get_ ## a()
extern bool Cwsw_Lib__Get_Initialized(void);


#ifdef	__cplusplus
}
#endif

#endif /* CWSW_LIB_H_ */
