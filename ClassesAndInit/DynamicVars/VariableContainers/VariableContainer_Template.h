//use ctrl+f and replace every instance of "classname" with the class name of your choice
//use ctrl+f and replace every instance of "classtype" with the type of your choice
//remember to search for "changeme" for everything else
//Don't include this file as-is, because the compiler will get mad

//Remember to copy the respective source (.c) file

#ifndef _DEF_VARIABLECONTAINER_CLASSNAME_H
#define _DEF_VARIABLECONTAINER_CLASSNAME_H

#include "vc_main_header.h"
#define VC_CLASSNAME_TYPE classtype
#define VC_INLINE_CLASSNAME TEXT("classtype")
#define VC_VALP_CLASSNAME TEXT("changeme")

#define VC_RAND_CLASSNAME_MIN -10
#define VC_RAND_CLASSNAME_MAX 10


VC_DEFINE(classname, VC_INLINE_CLASSNAME)

VC_DEFINE_SetValue(classname, VC_INLINE_CLASSNAME);
VC_DEFINE_GetValue(classname, VC_INLINE_CLASSNAME);
VC_DEFINE_WriteStream(classname);
VC_DEFINE_Randomize(classname, VC_INLINE_CLASSNAME);


#endif
