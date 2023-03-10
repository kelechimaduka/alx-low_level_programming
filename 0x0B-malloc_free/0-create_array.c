#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 *
 * @size: variable
 * @c: variable
 *
 * Return: success
 */

char *create_array(unsigned int size, char c)
{
	char *sizeH;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	sizeH = malloc(sizeof(c) * size);

	if (sizeH == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		sizeH[i] = c;
	}
	return (sizeH);
}
