#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints ann numbers
 *
 * Return - all numbers
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
