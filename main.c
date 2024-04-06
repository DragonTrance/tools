#include <Windows.h>

#include "ClassesAndInit/console.h"
#include "ClassesAndInit/CCommandLine.h"
#include "Utils/debug.h"
#include "IncludeBasic/unicode.h"
#include "Utils/rand64.h"
#include "ClassesAndInit/DynamicVars/VariableContainers.h"

int WINMAIN(hInstance, hPrevInstance, lpCmdLine, lpShowCmd)
{
	DEBUG_ENTER(int ReturnCode);
	rand64_seed[1] = GetTickCount64();
	srand(GetTickCount());

	for (size_t i = 0; i < 1028; i++) {
		struct VariableContainer_Float* X = VariableContainer_Float_New(VCFloat);
		if (!X) continue;

		VariableContainer_Float_Randomize(X);
		PRINTF(TEXT("%.32f\n"), *X->value);
		free(X);
	}

	DEBUG_EXIT(ReturnCode);
}

int main(int argc, char** argv)
{
	return MAIN(GetModuleHandle(NULL), NULL, GETCOMMANDLINE(), FALSE);
}
