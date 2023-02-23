#include "main.h"

/**
 * print_numbers - prints ann numbers
 *
 * Return - all numbers
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c + 48);
	}
_putchar('\n');
}
