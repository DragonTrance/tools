/*
	C-code file header, constructed by Cyanosis (AKA Dragon Trance)
	No licensing. Permission is allowed to make open-source / creative commons and distribution

	Used between projects, may not be up-to-date.
	Last Update: April 4th, 2024
*/

#ifndef _DEF_VARIABLECONTAINER_INT_H
#define _DEF_VARIABLECONTAINER_INT_H

#include "vc_main_header.h"
#define VC_INT_TYPE int
#define VC_INLINE_INT TEXT("int")
#define VC_VALP_INT TEXT("%d")

#define VC_RAND_INT_MIN -100
#define VC_RAND_INT_MAX 100


VC_DEFINE(Int, VC_INT_TYPE)

VC_DEFINE_New(Int, VC_INT_TYPE);
VC_DEFINE_SetValue(Int, VC_INT_TYPE);
VC_DEFINE_GetValue(Int, VC_INT_TYPE);
VC_DEFINE_WriteStream(Int);
VC_DEFINE_Randomize(Int, VC_INT_TYPE);


#endif