#include "main.h"

/**
 * print_rev - prints reverse characters
 *
 * @s: string to be displayed
 *
 * Return: success please
 */

void print_rev(char *s)
{
	int i, j;
	int count = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		count++;
	}

	for (j = (count - 1); j >= 0; --j)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
