/*
	C-code file header, constructed by Cyanosis (AKA Dragon Trance)
	No licensing. Permission is allowed to make open-source / creative commons and distribution

	Used between projects, may not be up-to-date.
	Last Update: April 4th, 2024
*/

#ifndef _DEF_VARIABLECONTAINER_FLOAT_H
#define _DEF_VARIABLECONTAINER_FLOAT_H

#include <float.h>
#include "vc_main_header.h"

#define VC_FLOAT_TYPE float
#define VC_INLINE_FLOAT TEXT("float")
#define VC_VALP_FLOAT TEXT("%.6f")

#define VC_RAND_FLOAT_MIN -10.0f
#define VC_RAND_FLOAT_MAX 10.0f


VC_DEFINE(Float, VC_FLOAT_TYPE)

VC_DEFINE_New(Float, VC_FLOAT_TYPE);
VC_DEFINE_SetValue(Float, VC_FLOAT_TYPE);
VC_DEFINE_GetValue(Float, VC_FLOAT_TYPE);
VC_DEFINE_WriteStream(Float);
VC_DEFINE_Randomize(Float, VC_FLOAT_TYPE);


#endif