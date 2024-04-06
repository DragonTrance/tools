#include "CCommandLine.h"

struct CCommandLine* CCommandLine_New(STRING InitialArguments)
{
    struct CCommandLine* NewArgs = malloc(sizeof(struct CCommandLine));
    if (!NewArgs) return NULL;

    NewArgs->InitialArguments = InitialArguments;
    NewArgs->SeparatedArguments = NULL;
    NewArgs->ArgCount = 0;
    return NewArgs;
}

void CCommandLine_Free(struct CCommandLine* Args, CCOMMANDLINE_FREE__TYPE Flags)
{
    //Deallocating the separated arguments
    if (Flags & CCOMMANDLINE_FREE_SEPARGS) {
        CCommandLine_FreeSeparatedArguments(Args);
        free(Args->SeparatedArguments);
    }

    //Deallocating the initial arguments
    if (Flags & CCOMMANDLINE_FREE_INIARGS) {
        free(Args->InitialArguments);
    }
    free(Args);
}

void CCommandLine_FreeSeparatedArguments(struct CCommandLine* Args)
{
    for (size_t i = 0; i < Args->ArgCount; i++) {
        free(Args->SeparatedArguments[i]);
        Args->SeparatedArguments[i] = NULL;
    }
    Args->ArgCount = 0;
}

BOOL CCommandLine_SeparateArguments(struct CCommandLine* CommandLineArguments)
{
    if (!CommandLineArguments) return FALSE;
    //Deallocating already-existing arguments
    CCommandLine_FreeSeparatedArguments(CommandLineArguments);

    STRING Tail = CommandLineArguments->InitialArguments;
    if (!Tail) return TRUE;

    //Ignoring whitespace at the start of the commandline
    CHAR_T current = *Tail;
    while (current && ISSPACE(current)) {
        Tail = &Tail[1];
        current = *Tail;
    }
    if (!current) return TRUE;

    STRING Head = NULL;
    BOOL InQuotes = FALSE;

    //This takes each argument from CCommandLine's initial arguments and separates them
    do {
        if (InQuotes) {
            if (current == TEXT('\"')) {
                if (!CCommandLine_AddArgument(CommandLineArguments, Tail, Head)) return FALSE;
                Head = NULL;
                InQuotes = FALSE;
            }
        }
        else {
            if (!Head) {
                if (current == TEXT('\"')) {
                    Head = &Tail[1];
                    InQuotes = TRUE;
                }
                else if (!ISSPACE(current)) {
                    Head = Tail;
                }
            }
            else if (ISSPACE(current)) {
                if (!CCommandLine_AddArgument(CommandLineArguments, Tail, Head)) return FALSE;
                Head = NULL;
            }
        }

        Tail = &Tail[1];
        current = *Tail;
    } while (current);

    //If there was a final argument before the end of the string was reached, add it in
    if (Head) {
        CCommandLine_AddArgument(CommandLineArguments, Tail, Head);
    }
    return TRUE;
}

STRING CCommandLine_AddArgument(struct CCommandLine* CommandLineArguments, STRING Tail, STRING Head)
{
    //Sanity check. Technically you don't need this if you know what you're doing
    if (Head > Tail) return NULL;


#if CCOMMANDLINE_MAXARGS > 0
    if (CommandLineArguments->ArgCount == CCOMMANDLINE_MAXARGS) {
        ALERT(TEXT("CCommandLine_AddArgument: exceeded ") TEXT(NUMBERSTRING(CCOMMANDLINE_MAXARGS)) TEXT(" parameters"), TEXT("Commandline Error"));
        return NULL;
    }
#endif

    //Taking the size of the new string by looking at the head and the tail in memory (they should be the same string)
    size_t uVar_Size = ((size_t)Tail - (size_t)Head);

    //Allocating memory so we can copy the new string (plus one char to add a null byte)
    STRING SepArg = malloc(uVar_Size + sizeof(SepArg[0]));
    if (!SepArg) return NULL;

    //Resizing the arguments to make sure the new one can fit
    STRING* NewArgs = realloc(CommandLineArguments->SeparatedArguments, sizeof(CommandLineArguments->SeparatedArguments) * (CommandLineArguments->ArgCount + 1));
    if (!NewArgs) { free(SepArg); return NULL; }
    CommandLineArguments->SeparatedArguments = NewArgs;
    CommandLineArguments->SeparatedArguments[CommandLineArguments->ArgCount++] = SepArg;

    //Copy the memory and terminate it with a null byte
    memcpy(SepArg, Head, uVar_Size);
    SepArg[uVar_Size / sizeof(SepArg[0])] = 0;
    return SepArg;
}
