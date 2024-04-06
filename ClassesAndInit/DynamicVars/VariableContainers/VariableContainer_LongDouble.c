/*
	C-code file header, constructed by Cyanosis (AKA Dragon Trance)
	No licensing. Permission is allowed to make open-source / creative commons and distribution

	Used between projects, may not be up-to-date.
	Last Update: April 4th, 2024
*/

#include "VariableContainer_LongDouble.h"
VC_DECLARE_New(LongDouble, VC_LONGDOUBLE_TYPE)
VC_DECLARE_SetValue(LongDouble, VC_LONGDOUBLE_TYPE)
VC_DECLARE_GetValue(LongDouble, VC_LONGDOUBLE_TYPE)
VC_DECLARE_WriteStream(LongDouble, VC_VALP_LONGDOUBLE)
VC_DEFINE_Randomize(LongDouble, VC_LONGDOUBLE_TYPE)
{
	if (!VC || !VC->value) return;
	*VC->value = VC_RAND_LONGDOUBLE_MIN + ((VC_LONGDOUBLE_TYPE)rand64() / (LDBL_MAX / (VC_RAND_LONGDOUBLE_MAX - VC_RAND_LONGDOUBLE_MIN)));
}
