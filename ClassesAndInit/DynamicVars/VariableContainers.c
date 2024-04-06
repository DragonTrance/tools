#include "VariableContainers.h"

STRING VC_NameFromType[VC_COUNT] = {
	VC_INLINE_CHAR,
	VC_INLINE_UCHAR,
	VC_INLINE_INT,
	VC_INLINE_UINT,
	VC_INLINE_LONG,
	VC_INLINE_ULONG,
	VC_INLINE_LONGLONG,
	VC_INLINE_ULONGLONG,
	VC_INLINE_FLOAT,
	VC_INLINE_DOUBLE,
	VC_INLINE_LONGDOUBLE
};

void* (*VC_GenericNew[VC_COUNT])(enum VCType NewType) = {
	VariableContainer_Char_New,
	VariableContainer_UChar_New,
	VariableContainer_Int_New,
	VariableContainer_UInt_New,
	VariableContainer_Long_New,
	VariableContainer_ULong_New,
	VariableContainer_LongLong_New,
	VariableContainer_ULongLong_New,
	VariableContainer_Float_New,
	VariableContainer_Double_New,
	VariableContainer_LongDouble_New
};

void (*VC_GenericSet[VC_COUNT])(void* VC, void* Value) = {
	VariableContainer_Char_SetValue,
	VariableContainer_UChar_SetValue,
	VariableContainer_Int_SetValue,
	VariableContainer_UInt_SetValue,
	VariableContainer_Long_SetValue,
	VariableContainer_ULong_SetValue,
	VariableContainer_LongLong_SetValue,
	VariableContainer_ULongLong_SetValue,
	VariableContainer_Float_SetValue,
	VariableContainer_Double_SetValue,
	VariableContainer_LongDouble_SetValue
};

void* (*VC_GenericGet[VC_COUNT])(void* VC) = {
	VariableContainer_Char_GetValue,
	VariableContainer_UChar_GetValue,
	VariableContainer_Int_GetValue,
	VariableContainer_UInt_GetValue,
	VariableContainer_Long_GetValue,
	VariableContainer_ULong_GetValue,
	VariableContainer_LongLong_GetValue,
	VariableContainer_ULongLong_GetValue,
	VariableContainer_Float_GetValue,
	VariableContainer_Double_GetValue,
	VariableContainer_LongDouble_GetValue
};

int (*VC_GenericWriteStream[VC_COUNT])(void* VC, FILE* _Stream) = {
	VariableContainer_Char_WriteStream,
	VariableContainer_UChar_WriteStream,
	VariableContainer_Int_WriteStream,
	VariableContainer_UInt_WriteStream,
	VariableContainer_Long_WriteStream,
	VariableContainer_ULong_WriteStream,
	VariableContainer_LongLong_WriteStream,
	VariableContainer_ULongLong_WriteStream,
	VariableContainer_Float_WriteStream,
	VariableContainer_Double_WriteStream,
	VariableContainer_LongDouble_WriteStream
};

void (*VC_GenericRandomize[VC_COUNT])(void* VC) = {
	VariableContainer_Char_Randomize,
	VariableContainer_UChar_Randomize,
	VariableContainer_Int_Randomize,
	VariableContainer_UInt_Randomize,
	VariableContainer_Long_Randomize,
	VariableContainer_ULong_Randomize,
	VariableContainer_LongLong_Randomize,
	VariableContainer_ULongLong_Randomize,
	VariableContainer_Float_Randomize,
	VariableContainer_Double_Randomize,
	VariableContainer_LongDouble_Randomize
};
