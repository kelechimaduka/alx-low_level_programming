#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints ann numbers
 *
 * Return - all numbers
 */

void print_numbers(void)
{

	for (int i = 0; i < 10; i++)
	{
		_putchar((i*10)/10 + 48);
	}
	_putchar('\n');
}
