/*
	C-code file header, constructed by Cyanosis (AKA Dragon Trance)
	No licensing. Permission is allowed to make open-source / creative commons and distribution

	Used between projects, may not be up-to-date.
	Last Update: April 4th, 2024
*/

#ifndef _DEF_VARIABLECONTAINER_UINT_H
#define _DEF_VARIABLECONTAINER_UINT_H

#include "vc_main_header.h"
#define VC_UINT_TYPE unsigned int
#define VC_INLINE_UINT TEXT("unsigned int")
#define VC_VALP_UINT TEXT("%u")

#define VC_RAND_UINT_MIN 0
#define VC_RAND_UINT_MAX 10


VC_DEFINE(UInt, VC_UINT_TYPE)

VC_DEFINE_New(UInt, VC_UINT_TYPE);
VC_DEFINE_SetValue(UInt, VC_UINT_TYPE);
VC_DEFINE_GetValue(UInt, VC_UINT_TYPE);
VC_DEFINE_WriteStream(UInt);
VC_DEFINE_Randomize(UInt, VC_UINT_TYPE);


#endif