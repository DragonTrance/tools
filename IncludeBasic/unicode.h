/*
	C-code file header, constructed by Cyanosis (AKA Dragon Trance)
	No licensing. Permission is allowed to make open-source / creative commons.

	Used between projects, may not be up-to-date.
	Last Update: April 4th, 2024
*/

#ifndef _DEF_UNICODE_H
#define _DEF_UNICODE_H

#include <Windows.h>
#include <stdio.h>

#ifdef _UNICODE

#define WINMAIN(n1, n2, n3, n4) wWinMain(_In_ HINSTANCE n1, _In_opt_ HINSTANCE n2, _In_ LPWSTR n3, _In_ int n4)
#define MAIN(...) wWinMain(__VA_ARGS__)

typedef LPWSTR STRING;
typedef WCHAR CHAR_T;

#define INLINE_STRING(contents) L#contents

#define PRINTF wprintf
#define PUTS _putws
#define PUTC putwc
#define SNPRINTF _snwprintf
#define STRLEN wcslen
#define STRDUP wcsdup
#define FGETC fgetwc
#define GETCOMMANDLINE GetCommandLineW

#define FOPEN _wfopen
#define FPUTC fputwc
#define FPUTS fputws
#define FPRINTF fwprintf

#define ISALNUM iswalnum
#define ISALPHA iswalpha
#define ISCNTRL iswcntrl
#define ISDIGIT iswdigit
#define ISXDIGIT iswxdigit
#define ISGRAPH iswgraph
#define ISPRINT iswprint
#define ISLOWER iswlower
#define ISUPPER iswupper
#define ISPUNCT iswpunct
#define ISSPACE iswspace
#define TOLOWER towlower
#define TOUPPER towupper

#else

#define WINMAIN(n1, n2, n3, n4) WinMain(_In_ HINSTANCE n1, _In_opt_ HINSTANCE n2, _In_ LPSTR n3, _In_ int n4)
#define MAIN(...) WinMain(__VA_ARGS__)

typedef LPSTR STRING;
typedef CHAR CHAR_T;

#define INLINE_STRING(contents) #contents

#define PRINTF printf
#define PUTS puts
#define PUTC putc
#define SNPRINTF snprintf
#define STRLEN strlen
#define STRDUP strdup
#define FGETC fgetc
#define GETCOMMANDLINE GetCommandLine

#define FOPEN fopen
#define FPUTC fputc
#define FPUTS fputs
#define FPRINTF fprintf

#define ISALNUM isalnum
#define ISALPHA isalpha
#define ISCNTRL iswcntrl
#define ISDIGIT isdigit
#define ISXDIGIT isxdigit
#define ISGRAPH isgraph
#define ISPRINT isprint
#define ISLOWER islower
#define ISUPPER isupper
#define ISPUNCT ispunct
#define ISSPACE isspace
#define TOLOWER tolower
#define TOUPPER toupper

#endif

#endif