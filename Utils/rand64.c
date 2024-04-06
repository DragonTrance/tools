#include "rand64.h"

inline uint64_t rand64_rotl(const uint64_t x, int k)
{
	return (x << k) | (x >> (64 - k));
}

uint64_t rand64_seed[2] = {14341632086448261963, 8823135163898232296};
uint64_t rand64(void)
{
	const uint64_t s0 = rand64_seed[0];
	uint64_t s1 = rand64_seed[1];
	const uint64_t result = s0 + s1;

	s1 ^= s0;
	rand64_seed[0] = rand64_rotl(s0, 24) ^ s1 ^ (s1 << 16); // a, b
	rand64_seed[1] = rand64_rotl(s1, 37); // c

	return result;
}
