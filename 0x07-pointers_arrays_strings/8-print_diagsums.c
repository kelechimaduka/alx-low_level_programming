#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of diagonals
 *
 * @a: arrays
 * @size: size of array
 *
 * Return: success
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int result1 = 0;
	int result2 = 0;
	int k = size - 1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				result1 = result1 + a[i * (size + 1)];
			}
		}
	}

	for (i = 0; i < size; i++)
	{
		result2 = result2 + a[k + (k * i)];
	}

	printf("%d, %d\n", result1, result2);
}
