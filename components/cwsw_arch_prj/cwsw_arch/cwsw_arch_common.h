/** @file
 *	@brief	API common to all instances of the cwsw_arch reusable component.
 *
 *	Description:
 *	Do not include this file directly; it is intended to be included by the architecture-specific
 *	API file in one of the supported architectures, located immediately below this file's location.
 *
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Jan 3, 2018
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef CWSW_ARCH_COMMON_H_
#define CWSW_ARCH_COMMON_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------
#include <stdint.h>

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define CWSW_ARCH_COMMON_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

// ==== Discrete Functions ================================================== {
/** Initialization for the MCU Architecture Support component.
 *	This function's responsibility is to set up the local vars, and manage the necessary HW, to
 *	prepare for the task function's 1st call (once the scheduler has been started).
 *
 *	This function shall be called before the main scheduler is started.
 *
 *	As general guidance, the CWSW Library component should have been initialized
 *	before this function is called (since this module depends on the library),
 *	though this is not a strict requirement.
 *
 *	As general guidance, this should be called before board or application
 *	initialization functions. This module sits at the "bottom" of the dependency
 *	tree, excepting for calls into support libraries.
 *
 *	@returns error code, or 0 for no problem (i.e., success).
 */
extern uint16_t Cwsw_Arch__Init(void);

// ==== /Discrete Functions ================================================= }

// ==== Targets for Get/Set APIs ============================================ {

/** "Chapter Designator" for Get/Set API.
 *	Intentionally unused symbol, designed to get you to the correct starting point, when you want
 *	to find macros for the Get/Set API; simply highlight the Module argument in your IDE (e.g,
 *	Eclipse, NetBeans, etc.), and select Go To Definition.
 */
enum { Cwsw_Arch = 1 };	/* Generic architecture for all MCU architectures */

/** Target symbol for Get(Cwsw_Arch, xxx) interface */
#define Cwsw_Arch__Get(a)		Cwsw_Arch__Get_ ## a()

/** Target for Get(Cwsw_Arch, Initialized) interface */
extern bool 					Cwsw_Arch__Get_Initialized(void);

// ==== /Targets for Get/Set APIs =========================================== }


#ifdef	__cplusplus
}
#endif

// ====	COMPONENT DOCUMENTATION ============================================= {
#if defined(IN_DOXY)				/* { */
/* klb: i apologize in advance for burdening your build, by forcing your compiler to consume all of
 * this information every build, every file that includes it. My only justification is that
 */
/**	\page Arch_Head Reusable Component : MCU Architecture Support
 *	@tableofcontents
 * 		@subpage Arch_Introduction \n
 * 		@subpage Arch_Design \n
 * 		@subpage Arch_Integration \n
 * 		@subpage StateEngine \n
 * 		@subpage Arch_srs \n
 */

/**	\page Arch_Introduction					Introduction to the Architecture reusable component
 *	@tableofcontents
 *	This chapter briefly describes the design and implementation of the Architecture reusable
 *	component member of the CWSW library.
 *
 *	This chapter also briefly describes the integration of this feature into the larger code base
 *	of the user software project.
 *
 *	The intended audience of this document is any software engineer who uses the CWSW library and
 *	wants to add support for one (or more) of the supported architectures.
 *
 *	\section arch_directory_layout			Directory Layout
 *	The Includes structure here is slightly different than in other CWSW components designed for
 *	reuse / multiple deployments.
 *
 *	In most CWSW components, the main API is published at the root of the component folder;
 *	any local-to-component headers are located within appropriate subfolders.
 *
 *	For this component, the main API is at the root of the architecture-specific folder.
 *	While there is an API file that exposes all APIs common to all architectures located at the
 *	component root, this is not intended to be used by projects that use the Architecture-Support
 *	component.
 *
 *
 *	\section arch_related_docs				Applicable Documents
 *	TBD
 *
 *	\section arch_terms						Terms, Acronyms, Abbreviations
 */

/**	\page Arch_Design						Architecture Subsystem Design
 *	@tableofcontents
 *		@subpage Arch_Responsibilities \n
 *		@subpage Arch_Constraints \n
 *		@subpage Arch_Interactions \n
 *		@subpage Arch_Composition \n
 *		@subpage Arch_Resources \n
 *		@subpage Arch_Interfaces \n
 *		@subpage Arch_Main_Obj_Diag \n
 *		@subpage Arch_Dsm \n
 */

	/**	@page Arch_Responsibilities			Component Responsibilities
	 *	@tableofcontents
	 * 	The Architecture component manages all aspects of the MCU. In some cases, one Component may
	 * 	be configured to handle multiple variants of the MCU; however, in most cases, there will be
	 * 	one Arch component per MCU variant.
	 */

	/**	@page Arch_Constraints				Constraints Imposed Upon Component
	 *	@tableofcontents
	 *	-	TBD. Should be at the "bottom" of the dependency tree, except for libraries such as the
	 *		CWSW Library.
	 */

	/**	\page Arch_Resources        	   	Resources
	 *	@tableofcontents
	 *	TBD
	 */

/**	@page Arch_Integration					Integrating the Reusable Component
 *	@tableofcontents
 */

#endif								/* } */
// ==== /COMPONENT DOCUMENTATION ============================================ }


#endif /* CWSW_ARCH_COMMON_H_ */
