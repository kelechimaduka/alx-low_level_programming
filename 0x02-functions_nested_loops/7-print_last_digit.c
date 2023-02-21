#include "main.h"

/**
 * _abs - discussed
 *
 * @n: integer
 *
 * Return: abs
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: integer
 *
 * Return: Success
 */

int print_last_digit(int n)
{
	int last;

	last = _abs((n % 10));
	_putchar(last = 48);
	return (last);
}
