/*
	C-code file header, constructed by Cyanosis (AKA Dragon Trance)
	No licensing. Permission is allowed to make open-source / creative commons.

	Used between projects, may not be up-to-date.
	Last Update: April 4th, 2024
*/

#ifndef _DEF_MATH_H
#define _DEF_MATH_H

#include <math.h>
#include <inttypes.h>

#define FLAGS_ALL (~0)
#define FLAGS_NONE (0)
#define FLAGS_ALL_EXCEPT(extra_flags) (FLAGS_ALL & ~extra_flags)

#define FLAG_DELEGATE(size, name) typedef uint##size##_t name##__TYPE;
#define FLAG(size, flagnumber) ((1 << size) >> flagnumber)
/* NOTE: Doesn't work, the linker thinks these exist multiple times
#define FLAG_DECLARE(origname, flagname, flagnumber) const origname##__TYPE flagname = ((1 << (sizeof(origname##__TYPE) * 8)) >> flagnumber);
*/

/// <summary>
/// Accepts a 64-bit (8-byte) variable and returns the base-10 version of the input.
/// </summary>
/// <param name="X">The variable to calculate</param>
uint8_t log10_64t(uint64_t X);

//Takes a number as input and returns the amount of characters it would take up if it were a string
#define NUM2STRING_COUNT(num) ((size_t)(log10_64t(num) + 1))



#endif
