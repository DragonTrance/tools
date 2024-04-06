/*
	C-code file header, constructed by Cyanosis (AKA Dragon Trance)
	No licensing. Permission is allowed to make open-source / creative commons and distribution

	Used between projects, may not be up-to-date.
	Last Update: April 4th, 2024
*/

#include "VariableContainer_Double.h"
VC_DECLARE_New(Double, VC_DOUBLE_TYPE)
VC_DECLARE_SetValue(Double, VC_DOUBLE_TYPE)
VC_DECLARE_GetValue(Double, VC_DOUBLE_TYPE)
VC_DECLARE_WriteStream(Double, VC_VALP_DOUBLE)
VC_DEFINE_Randomize(Double, VC_DOUBLE_TYPE)
{
	if (!VC || !VC->value) return;
	*VC->value = VC_RAND_DOUBLE_MIN + ((VC_DOUBLE_TYPE)rand64() / (DBL_MAX / (VC_RAND_DOUBLE_MAX - VC_RAND_DOUBLE_MIN)));
}
