#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer of 2D array
 *
 * @width: width variable
 * @height: height vaiable
 *
 * Return: Success
 */

int **alloc_grid(int width, int height)
{
	int **output;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	output = malloc(sizeof(int *) * height);

	if (output == NULL)
	{
		free(output);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		output[i] = malloc(sizeof(int) * width);
		if (output[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(output[i]);
			}
			free(output);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			output[i][j] = 0;
		}
	}
	return (output);
}
