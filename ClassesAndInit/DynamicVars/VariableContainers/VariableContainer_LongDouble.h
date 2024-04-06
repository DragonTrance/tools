/*
	C-code file header, constructed by Cyanosis (AKA Dragon Trance)
	No licensing. Permission is allowed to make open-source / creative commons and distribution

	Used between projects, may not be up-to-date.
	Last Update: April 4th, 2024
*/

#ifndef _DEF_VARIABLECONTAINER_LONGDOUBLE_H
#define _DEF_VARIABLECONTAINER_LONGDOUBLE_H

#include <float.h>
#include "vc_main_header.h"
#define VC_LONGDOUBLE_TYPE long double
#define VC_INLINE_LONGDOUBLE TEXT("long double")
#define VC_VALP_LONGDOUBLE TEXT("%.12Lf")

#define VC_RAND_LONGDOUBLE_MIN -1000.0L
#define VC_RAND_LONGDOUBLE_MAX 1000.0L


VC_DEFINE(LongDouble, VC_LONGDOUBLE_TYPE)

VC_DEFINE_New(LongDouble, VC_LONGDOUBLE_TYPE);
VC_DEFINE_SetValue(LongDouble, VC_LONGDOUBLE_TYPE);
VC_DEFINE_GetValue(LongDouble, VC_LONGDOUBLE_TYPE);
VC_DEFINE_WriteStream(LongDouble);
VC_DEFINE_Randomize(LongDouble, VC_LONGDOUBLE_TYPE);


#endif