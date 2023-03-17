#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: Success
 */

int *array_range(int min, int max)
{
	int i;
	int *result;

	if (min > max)
	{
		return (NULL);
	}

	result = malloc(sizeof(*result) * ((max - min) + 1));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
	{
		result[i] = min;
	}

	return (result);
}
