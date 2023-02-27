#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of elements
 *
 * @a: array
 *
 * @n: integer
 *
 * Return: success
 */

void print_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		if (i == n)
		{
			printf("%d", i[n]);
		}
		else
		{
			printf("%d, ", i[n]);
		}
	}
	printf('\n');
}
