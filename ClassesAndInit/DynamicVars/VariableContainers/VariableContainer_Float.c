/*
	C-code file header, constructed by Cyanosis (AKA Dragon Trance)
	No licensing. Permission is allowed to make open-source / creative commons and distribution

	Used between projects, may not be up-to-date.
	Last Update: April 4th, 2024
*/

#include "VariableContainer_Float.h"
VC_DECLARE_New(Float, VC_FLOAT_TYPE)
VC_DECLARE_SetValue(Float, VC_FLOAT_TYPE)
VC_DECLARE_GetValue(Float, VC_FLOAT_TYPE)
VC_DECLARE_WriteStream(Float, VC_VALP_FLOAT)

VC_DEFINE_Randomize(Float, VC_FLOAT_TYPE)
{
	if (!VC || !VC->value) return;
	int x = rand();
	*VC->value = VC_RAND_FLOAT_MIN + (*(float*)&x / (FLT_MAX / (VC_RAND_FLOAT_MAX - VC_RAND_FLOAT_MIN)));
}
