/**
 * @file extern.h
 * @brief Definition of the extern class.
 * @author DEVISER
 *
 * <!--------------------------------------------------------------------------
 * This file is part of libSEDML. Please visit http://sed-ml.org for more
 * information about SED-ML. The latest version of libSEDML can be found on
 * github: https://github.com/fbergmann/libSEDML/
 * 

 * Copyright (c) 2013-2016, Frank T. Bergmann
 * All rights reserved.
 * 

 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 

 * 1. Redistributions of source code must retain the above copyright notice,
 * this
 * list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation. A copy of the license agreement is provided in the
 * file named "LICENSE.txt" included with this software distribution and also
 * available online as http://sbml.org/software/libsbml/license.html
 * ------------------------------------------------------------------------ -->
 *
 * @class extern
 * @sbmlbrief{} TODO:Definition of the extern class.
 */



#ifndef LIBSEDML_EXTERN_H
#define LIBSEDML_EXTERN_H

#include <sedml/common/libsedml-namespace.h>

#if ( defined(WIN32) && !defined(CYGWIN) && !defined(__MINGW32__))

#if ( ! defined LIBSEDML_STATIC )
/**
 * The following ifdef block is the standard way of creating macros which
 * make exporting from a DLL simpler. All files within this DLL are
 * compiled with the LIBSEDML_EXPORTS symbol defined on the command line.
 * This symbol should not be defined on any project that uses this
 * DLL. This way any other project whose source files include this file see
 * LIBSEDML_EXTERN functions as being imported from a DLL, wheras this DLL
 * sees symbols defined with this macro as being exported.
 *
 * (From Andrew Finney's sbwdefs.h, with "SBW" replaced by "LIBSEDML" :)
 */
#if defined(LIBSEDML_EXPORTS)
#  define LIBSEDML_EXTERN __declspec(dllexport)
#else
#  define LIBSEDML_EXTERN __declspec(dllimport)
#endif

#else
#  define LIBSEDML_EXTERN
#endif  /* LIBSEDML_STATIC */

/**
 * Disable MSVC++ warning C4800: 'const int' : forcing value to bool 'true'
 * or 'false' (performance warning).
 */
#pragma warning(disable: 4800)

/**
 * Disable MSVC++ warning C4291: no matching operator delete found.
 */
#pragma warning(disable: 4291)

/**
 * Disable MSVC++ warning C4251: class 'type' needs to have dll-interface
 * to be used by clients of class 'type2'.
 *
 * For an explanation of why this is safe, see:
 *   - http://www.unknownroad.com/rtfm/VisualStudio/warningC4251.html
 */
#pragma warning(disable: 4251)
#pragma warning(disable: 4275)

#else

/**
 * LIBSEDML_EXTERN is used under Windows to simplify exporting functions
 * from a DLL.  When compiling under Windows, all files within this DLL are
 * compiled with the LIBSEDML_EXPORTS symbol defined on the command line.
 * This in turn causes extern.h to define a different version of
 * LIBSEDML_EXTERN that is appropriate for exporting functions to client
 * code that uses the DLL.
 */
#define LIBSEDML_EXTERN

#endif  /* WIN32 */

#undef BEGIN_C_DECLS
#undef END_C_DECLS

#if defined(__cplusplus)
#  define BEGIN_C_DECLS extern "C" {
#  define END_C_DECLS   }
#else
#  define BEGIN_C_DECLS
#  define END_C_DECLS
#endif


#endif  /** LIBSEDML_EXTERN_H **/

