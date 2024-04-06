/*
	C-code file header, constructed by Cyanosis (AKA Dragon Trance)
	No licensing. Permission is allowed to make open-source / creative commons and distribution

	Used between projects, may not be up-to-date.
	Last Update: April 4th, 2024


==== Defining a new VariableContainer Class =============================================================
 1. Copy the Variable_Container_Template source and header files (following the instructions in their files)
=========================================================================================================
*/


#ifndef _DEF_VC_MAIN_HEADER_H
#define _DEF_VC_MAIN_HEADER_H

#include <Windows.h>
#include <stdio.h>
#include "../../../Utils/rand64.h"			//Project/Utils/rand64.h
#include "../../../IncludeBasic/unicode.h"	//Project/IncludeBasic/unicode.h

enum VCType {
	VCChar = 0,
	VCUChar,
	VCInt,
	VCUInt,
	VCLong,
	VCULong,
	VCLongLong,
	VCULongLong,
	VCFloat,
	VCDouble,
	VCLongDouble
};

struct VariableDeclaration {
	enum VCType type;
};


////// Variable Container Master Functions //////

#define VC_NOMENCLATURE(struct_name) VariableContainer_##struct_name
#define VC_STRUCT_NOMENCLATURE(struct_name) struct VC_NOMENCLATURE(struct_name)
#define VC_DEFINE(struct_name, struct_type) \
VC_STRUCT_NOMENCLATURE(struct_name) { \
	struct VariableDeclaration declaration; \
	struct_type* value; \
};

#define VC_NOMENCLATURE_New(struct_name) VariableContainer_##struct_name##_New
#define VC_DEFINE_New(struct_name, struct_type) VC_STRUCT_NOMENCLATURE(struct_name)* VC_NOMENCLATURE_New(struct_name) (enum VCType new_type)
#define VC_DECLARE_New(struct_name, struct_type) \
VC_DEFINE_New(struct_name) \
{ \
	VC_STRUCT_NOMENCLATURE(struct_name)* VC = malloc(sizeof(VC_STRUCT_NOMENCLATURE(struct_name))); \
	if (!VC) return NULL; \
	VC->value = malloc(sizeof(struct_type)); \
	if (!VC->value) { \
		free(VC); \
		return NULL; \
	} \
	VC->declaration.type = new_type;\
	*VC->value = (struct_type)0x00;\
	return VC; \
}

#define VC_NOMENCLATURE_SetValue(struct_name) VariableContainer_##struct_name##_SetValue
#define VC_DEFINE_SetValue(struct_name, struct_type) void VC_NOMENCLATURE_SetValue(struct_name)(VC_STRUCT_NOMENCLATURE(struct_name)* VC, struct_type* NewValue)
#define VC_DECLARE_SetValue(struct_name, struct_type) \
VC_DEFINE_SetValue(struct_name, struct_type) \
{ \
	if (!VC || !NewValue) return; \
	VC->value = NewValue; \
}

#define VC_NOMENCLATURE_GetValue(struct_name) VariableContainer_##struct_name##_GetValue
#define VC_DEFINE_GetValue(struct_name, struct_type) struct_type* VC_NOMENCLATURE_GetValue(struct_name)(VC_STRUCT_NOMENCLATURE(struct_name)* VC)
#define VC_DECLARE_GetValue(struct_name, struct_type) \
VC_DEFINE_GetValue(struct_name, struct_type) \
{ \
	if (!VC) return NULL; \
	return VC->value; \
}

#define VC_NOMENCLATURE_WriteStream(struct_name) VariableContainer_##struct_name##_WriteStream
#define VC_DEFINE_WriteStream(struct_name) int VC_NOMENCLATURE_WriteStream(struct_name)(VC_STRUCT_NOMENCLATURE(struct_name)* VC, FILE* _Stream)
#define VC_DECLARE_WriteStream(struct_name, struct_print_value) \
VC_DEFINE_WriteStream(struct_name) \
{ \
	if (!VC || !VC->value || !_Stream) return -1; \
	return FPRINTF(_Stream, struct_print_value, *(VC->value)); \
}

#define VC_NOMENCLATURE_Randomize(struct_name) VariableContainer_##struct_name##_Randomize
#define VC_DEFINE_Randomize(struct_name, struct_type) void VC_NOMENCLATURE_Randomize(struct_name)(VC_STRUCT_NOMENCLATURE(struct_name)* VC)
#define VC_DECLARE_Randomize(struct_name, struct_type, RANGE_LOW, RANGE_HIGH) \
VC_DEFINE_Randomize(struct_name, struct_type) \
{ \
	if (!VC || !VC->value) return; \
	*VC->value = RANGE_LOW + (rand64() % (RANGE_HIGH - RANGE_LOW)); \
}


#endif