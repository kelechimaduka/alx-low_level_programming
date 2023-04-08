#include "main.h"

/**
 * flip_bits - returns the number of bits to be flipped to get anothe number
 *
 * @n: int
 * @m: int
 *
 * Return: sucess
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, reset;

	reset = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			reset++;
	return (reset);
}
