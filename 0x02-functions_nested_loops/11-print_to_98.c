#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints to 98
 *
 * @n: variable
 *
 * Return: value
 */

void print_to_98(int n)
{
	int f;

	if (n < 98)
	{
		for (f = n; f < 98; f++)
		{
			printf("%d, ", f);
		}
	}
	else if (n > 98)
	{
		for (f = n; f > 98; f--)
		{
			printf("%d, ", f);
		}
	}

	printf("98\n");
}
