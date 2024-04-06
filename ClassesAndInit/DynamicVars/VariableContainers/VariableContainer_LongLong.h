/*
	C-code file header, constructed by Cyanosis (AKA Dragon Trance)
	No licensing. Permission is allowed to make open-source / creative commons and distribution

	Used between projects, may not be up-to-date.
	Last Update: April 4th, 2024
*/

#ifndef _DEF_VARIABLECONTAINER_LONGLONG_H
#define _DEF_VARIABLECONTAINER_LONGLONG_H

#include "vc_main_header.h"
#define VC_LONGLONG_TYPE long long
#define VC_INLINE_LONGLONG TEXT("long long")
#define VC_VALP_LONGLONG TEXT("%lld")

#define VC_RAND_LONGLONG_MIN -10
#define VC_RAND_LONGLONG_MAX 10


VC_DEFINE(LongLong, VC_LONGLONG_TYPE)

VC_DEFINE_New(LongLong, VC_LONGLONG_TYPE);
VC_DEFINE_SetValue(LongLong, VC_LONGLONG_TYPE);
VC_DEFINE_GetValue(LongLong, VC_LONGLONG_TYPE);
VC_DEFINE_WriteStream(LongLong);
VC_DEFINE_Randomize(LongLong, VC_LONGLONG_TYPE);


#endif