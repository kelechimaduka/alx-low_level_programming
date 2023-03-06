#include "main.h"

/**
 * _memcpy - copies memory with a constant byte
 *
 * @dest: constant
 * @src: constant byte
 * @n: constant
 *
 * Return: Success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
