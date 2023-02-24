#include "main.h"
#include <stdio.h>

/**
 * print_number - prints number
 *
 * @n: variable
 *
 * Return: success
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		n *= -1;
		i = n;
		_putchar('-');
	}
	else if (i = 0)
	{
		_putchar(48);
	}
	else
	{
		i /= 10;
	}
	_putchar((unsigned int) n % 10 + '0');
}
