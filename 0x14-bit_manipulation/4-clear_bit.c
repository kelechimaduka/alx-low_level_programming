#include "main.h"

/**
 * clear_bit - sets a value of a bit to 0 at a given index
 *
 * @n: int
 * @index: index
 *
 * Return: Success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
