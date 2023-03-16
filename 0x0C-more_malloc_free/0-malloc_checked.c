#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - alocates memory
 *
 * @b: integer
 *
 * Return: Success
 */

void *malloc_checked(unsigned int b)
{
	char *t;

	t = malloc(b);
	if (t == NULL)
	{
		exit(98);
	}
	return (t);
}
