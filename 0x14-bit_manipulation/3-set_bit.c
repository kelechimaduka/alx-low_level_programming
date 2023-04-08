#include "main.h"

/**
 * set_bit - sets value to a bit to 1 at a given index
 *
 * @n : int
 * @index: index
 *
 * Return: success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
