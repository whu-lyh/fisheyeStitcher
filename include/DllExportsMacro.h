#pragma once

#ifdef FISHEYE_STITCHER_USE_AS_DLL

// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the FISHEYE_STITCHER_EXPORT
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// FISHEYE_STITCHER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.

#ifdef FISHEYE_STITCHER_EXPORT
#define FISHEYE_STITCHER_API __declspec(dllexport)
#else
#define FISHEYE_STITCHER_API __declspec(dllimport)
#endif

#else // NOT FISHEYE_STITCHER_USE_AS_DLL

#define FISHEYE_STITCHER_API

#endif // FISHEYE_STITCHER_USE_AS_DLL

#ifndef PCL_NO_PRECOMPILE
#define PCL_NO_PRECOMPILE
#endif // PCL_NO_PRECOMPILE