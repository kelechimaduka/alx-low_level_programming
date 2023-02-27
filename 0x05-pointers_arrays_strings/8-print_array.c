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

	for (i = 0; i < n; i++)
		printf("%d, ", a[i]);

		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		_putchar('\n');
}
