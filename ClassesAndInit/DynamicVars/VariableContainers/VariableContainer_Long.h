/*
	C-code file header, constructed by Cyanosis (AKA Dragon Trance)
	No licensing. Permission is allowed to make open-source / creative commons and distribution

	Used between projects, may not be up-to-date.
	Last Update: April 4th, 2024
*/

#ifndef _DEF_VARIABLECONTAINER_LONG_H
#define _DEF_VARIABLECONTAINER_LONG_H

#include "vc_main_header.h"
#define VC_LONG_TYPE long
#define VC_INLINE_LONG TEXT("long")
#define VC_VALP_LONG TEXT("%ld")

#define VC_RAND_LONG_MIN -1000
#define VC_RAND_LONG_MAX 1000


VC_DEFINE(Long, VC_LONG_TYPE)

VC_DEFINE_New(Long, VC_LONG_TYPE);
VC_DEFINE_SetValue(Long, VC_LONG_TYPE);
VC_DEFINE_GetValue(Long, VC_LONG_TYPE);
VC_DEFINE_WriteStream(Long);
VC_DEFINE_Randomize(Long, VC_LONG_TYPE);


#endif