/*
	C-code file header, constructed by Cyanosis (AKA Dragon Trance)
	No licensing. Permission is allowed to make open-source / creative commons.

	Used between projects, may not be up-to-date.
	Last Update: March 30th, 2024
*/

#ifndef _DEF_CCOMMANDLINE_H
#define _DEF_CCOMMANDLINE_H

#include <Windows.h>
#include "../Utils/string.h"
#include "../Utils/math.h"

#define CCOMMANDLINE_MAXARGS 0
struct CCommandLine {
	STRING InitialArguments;
	STRING* SeparatedArguments;
	size_t ArgCount;
};

FLAG_DELEGATE(8, CCOMMANDLINE_FREE)
#define CCOMMANDLINE_FREE_SEPARGS FLAG(8, 1)	//Free each argument within SeparatedArgs
#define CCOMMANDLINE_FREE_INIARGS FLAG(8, 2)	//Free the InitialArguments string

/// <summary>
/// <para>!! Allocation Function !!</para>
/// <para>Allocates new memory for a CCommandLine structure, assuming its InitialArguments.</para>
/// </summary>
/// <param name='InitialArguments'>The commandline arguments to pass to the CCommandLine structure, which can be GetCommandLine(). Allowed to be NULL. </param>
/// <returns>
/// A new CCommandLine struct, or NULL if there is no memory available.
/// </returns>
struct CCommandLine* CCommandLine_New(STRING InitialArguments);

/// <summary>
/// <para>Free's a CCommandLine structure from memory (does not check for NULL).</para>
/// </summary>
/// <param name="Args">The CCommandLine structure to free from memory.</param>
/// <param name="Flags">The flags for freeing the structure. See console.h for info.</param>
void CCommandLine_Free(struct CCommandLine* Args, CCOMMANDLINE_FREE__TYPE Flags);

/// <summary>
/// <para>Calls <c>free()</c> on each string within <c>Args.SeparatedArgs</c>.</para>
/// </summary>
/// <param name="Args">The CCommandLine structure to free the separated arguments from.</param>
void CCommandLine_FreeSeparatedArguments(struct CCommandLine* Args);

/// <summary>
/// <para>!! Allocation Function !!</para>
/// <para>Takes each parameter inside of CCommandLine.InitialArguments and separates them each into their own unique strings, ignoring quotations and spaces.</para>
/// </summary>
/// <param name="CommandLineArguments">The CCommandLine structure to separate arguments from.</param>
/// <returns>
/// FALSE if no memory was available to separate the arguments into a new string. Otherwise, returns non-zero.
/// </returns>
BOOL CCommandLine_SeparateArguments(struct CCommandLine* CommandLineArguments);

/// <summary>
/// <para>!! Allocation Function !!</para>
/// <para>Assuming <c>Argument</c> and <c>SourceCommands</c> are within the same string, <c>Argument</c> is copied into the last address of <c>CommandLineArguments.SeparatedArguments</c></para>
/// </summary>
/// <param name="CommandLineArguments">The CCommandLine structure to copy the string to.</param>
/// <param name="Tail">The tail-end of the argument string.</param>
/// <param name="Head">The head of the argument string.</param>
/// <returns>
/// A pointer to the <c>Argument</c> that was copied from <c>SourceCommands</c>. Returns NULL if there was no memory available for the new string.
/// </returns>
STRING CCommandLine_AddArgument(struct CCommandLine* CommandLineArguments, STRING Tail, STRING Head);

#endif