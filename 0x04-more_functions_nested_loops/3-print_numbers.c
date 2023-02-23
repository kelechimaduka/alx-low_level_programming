#include "main.h"

/**
 * print_numbers - prints ann numbers
 *
 * Return - all numbers
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i + 48);
	}
_putchar('\n');
}
