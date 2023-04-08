#include "main.h"

/**
 * print_binary - prints binary representation of a number
 *
 * @n: number
 *
 * Return: Success
 */

void print_binary(unsigned long int n)
{
	int i, j;

	if (n == 0)
		_putchar('0');
	for (j = 0, i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			j = 1;
		if (j == 1)
			((n >> i) & 1) ? _putchar('1') : _putchar('0');
	}
}
