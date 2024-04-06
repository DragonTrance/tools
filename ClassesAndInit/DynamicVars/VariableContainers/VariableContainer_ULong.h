/*
	C-code file header, constructed by Cyanosis (AKA Dragon Trance)
	No licensing. Permission is allowed to make open-source / creative commons and distribution

	Used between projects, may not be up-to-date.
	Last Update: April 4th, 2024
*/

#ifndef _DEF_VARIABLECONTAINER_ULONG_H
#define _DEF_VARIABLECONTAINER_ULONG_H

#include "vc_main_header.h"
#define VC_ULONG_TYPE unsigned long
#define VC_INLINE_ULONG TEXT("unsigned long")
#define VC_VALP_ULONG TEXT("%lu")

#define VC_RAND_ULONG_MIN -10
#define VC_RAND_ULONG_MAX 10


VC_DEFINE(ULong, VC_ULONG_TYPE)

VC_DEFINE_New(ULong, VC_ULONG_TYPE);
VC_DEFINE_SetValue(ULong, VC_ULONG_TYPE);
VC_DEFINE_GetValue(ULong, VC_ULONG_TYPE);
VC_DEFINE_WriteStream(ULong);
VC_DEFINE_Randomize(ULong, VC_ULONG_TYPE);


#endif