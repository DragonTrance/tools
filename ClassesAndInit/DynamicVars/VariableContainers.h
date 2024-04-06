/*
	C-code file header, constructed by Cyanosis (AKA Dragon Trance)
	No licensing. Permission is allowed to make open-source / creative commons and distribution

	Used between projects, may not be up-to-date.
	Last Update: April 4th, 2024
*/
//sue me for adding classes in a C project
//horrible to maintain but oh well

#ifndef _DEF_VARIABLECONTAINERS_H
#define _DEF_VARIABLECONTAINERS_H

////// Variable Container Includes //////

#define VC_COUNT (11)
#include "VariableContainers/VariableContainer_Char.h"
#include "VariableContainers/VariableContainer_UChar.h"
#include "VariableContainers/VariableContainer_Int.h"
#include "VariableContainers/VariableContainer_UInt.h"
#include "VariableContainers/VariableContainer_Long.h"
#include "VariableContainers/VariableContainer_ULong.h"
#include "VariableContainers/VariableContainer_LongLong.h"
#include "VariableContainers/VariableContainer_ULongLong.h"
#include "VariableContainers/VariableContainer_Float.h"
#include "VariableContainers/VariableContainer_Double.h"
#include "VariableContainers/VariableContainer_LongDouble.h"


extern STRING VC_NameFromType[VC_COUNT];
void* (*VC_GenericNew[VC_COUNT])(enum VCType NewType);
void (*VC_GenericSet[VC_COUNT])(void* VC, void* Value);
void* (*VC_GenericGet[VC_COUNT])(void* VC);
int (*VC_GenericWriteStream[VC_COUNT])(void* VC, FILE* _Stream);
void (*VC_GenericRandomize[VC_COUNT])(void* VC);


#endif