/*
	C-code file header, constructed by Cyanosis (AKA Dragon Trance)
	No licensing. Permission is allowed to make open-source / creative commons and distribution

	Used between projects, may not be up-to-date.
	Last Update: April 4th, 2024
*/

#ifndef _DEF_VARIABLECONTAINER_ULONGLONG_H
#define _DEF_VARIABLECONTAINER_ULONGLONG_H

#include "vc_main_header.h"
#define VC_ULONGLONG_TYPE unsigned long long
#define VC_INLINE_ULONGLONG TEXT("unsigned long long")
#define VC_VALP_ULONGLONG TEXT("%d")

#define VC_RAND_ULONGLONG_MIN -10
#define VC_RAND_ULONGLONG_MAX 10


VC_DEFINE(ULongLong, VC_ULONGLONG_TYPE)

VC_DEFINE_New(ULongLong, VC_ULONGLONG_TYPE);
VC_DEFINE_SetValue(ULongLong, VC_ULONGLONG_TYPE);
VC_DEFINE_GetValue(ULongLong, VC_ULONGLONG_TYPE);
VC_DEFINE_WriteStream(ULongLong);
VC_DEFINE_Randomize(ULongLong, VC_ULONGLONG_TYPE);


#endif