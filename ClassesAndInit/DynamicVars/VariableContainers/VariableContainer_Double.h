/*
	C-code file header, constructed by Cyanosis (AKA Dragon Trance)
	No licensing. Permission is allowed to make open-source / creative commons and distribution

	Used between projects, may not be up-to-date.
	Last Update: April 4th, 2024
*/

#ifndef _DEF_VARIABLECONTAINER_DOUBLE_H
#define _DEF_VARIABLECONTAINER_DOUBLE_H

#include <float.h>
#include "vc_main_header.h"
#define VC_DOUBLE_TYPE double
#define VC_INLINE_DOUBLE TEXT("double")
#define VC_VALP_DOUBLE TEXT("%.6f")

#define VC_RAND_DOUBLE_MIN -100.0
#define VC_RAND_DOUBLE_MAX 100.0


VC_DEFINE(Double, VC_DOUBLE_TYPE)

VC_DEFINE_New(Double, VC_DOUBLE_TYPE);
VC_DEFINE_SetValue(Double, VC_DOUBLE_TYPE);
VC_DEFINE_GetValue(Double, VC_DOUBLE_TYPE);
VC_DEFINE_WriteStream(Double);
VC_DEFINE_Randomize(Double, VC_DOUBLE_TYPE);


#endif