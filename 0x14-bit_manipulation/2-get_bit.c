#include "main.h"

/**
 * get_bit - returns value of a bit
 *
 * @n: int
 * @index: index
 *
 * Return: Success
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
