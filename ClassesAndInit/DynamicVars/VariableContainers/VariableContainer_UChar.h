/*
	C-code file header, constructed by Cyanosis (AKA Dragon Trance)
	No licensing. Permission is allowed to make open-source / creative commons and distribution

	Used between projects, may not be up-to-date.
	Last Update: April 4th, 2024
*/

#ifndef _DEF_VARIABLECONTAINER_UCHAR_H
#define _DEF_VARIABLECONTAINER_UCHAR_H

#include "vc_main_header.h"

#define VC_UCHAR_TYPE unsigned char
#define VC_INLINE_UCHAR TEXT("unsigned char")
#define VC_VALP_UCHAR TEXT("%u")

#define VC_RAND_UCHAR_MIN 0
#define VC_RAND_UCHAR_MAX 10

VC_DEFINE(UChar, VC_UCHAR_TYPE)

VC_DEFINE_New(UChar, VC_UChar_TYPE);
VC_DEFINE_SetValue(UChar, VC_UCHAR_TYPE);
VC_DEFINE_GetValue(UChar, VC_UCHAR_TYPE);
VC_DEFINE_WriteStream(UChar);
VC_DEFINE_Randomize(UChar, VC_UCHAR_TYPE);


#endif