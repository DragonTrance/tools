#include "math.h"

uint8_t log10_64t(uint64_t X)
{
	uint8_t log = 0;
	while (X >= 10) {
		X /= 10;
		log++;
	}
	return log;
}
