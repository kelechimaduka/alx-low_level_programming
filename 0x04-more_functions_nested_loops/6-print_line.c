#include <stdio.h>
#include "main.h"

/**
 * print_line - to print line
 *
 * @n: the number of lines to be printed
 *
 * Return: Successful
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
