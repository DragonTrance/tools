/*
	C-code file header, constructed by Cyanosis (AKA Dragon Trance)
	No licensing. Permission is allowed to make open-source / creative commons and distribution

	Used between projects, may not be up-to-date.
	Last Update: April 4th, 2024
*/

#ifndef _DEF_VARIABLECONTAINER_CHAR_H
#define _DEF_VARIABLECONTAINER_CHAR_H

#include "vc_main_header.h"
#define VC_CHAR_TYPE char
#define VC_INLINE_CHAR TEXT("char")
#define VC_VALP_CHAR TEXT("%d")

#define VC_RAND_CHAR_MIN -10
#define VC_RAND_CHAR_MAX 10


VC_DEFINE(Char, VC_CHAR_TYPE)

VC_DEFINE_New(Char, VC_CHAR_TYPE);
VC_DEFINE_SetValue(Char, VC_CHAR_TYPE);
VC_DEFINE_GetValue(Char, VC_CHAR_TYPE);
VC_DEFINE_WriteStream(Char);
VC_DEFINE_Randomize(Char, VC_CHAR_TYPE);


#endif