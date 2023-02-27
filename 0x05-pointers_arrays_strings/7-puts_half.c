#include "main.h"

/**
 * puts_half - puts the second half of a string + the odd last number
 *
 * @str: string
 *
 * Return: success
 */

void puts_half(char *str)
{
	int i, k;
	int j = 0;

	for (i = 1; str[i] != '\0'; i++)
	{
		j++;
	}

	k = j / 2;

	if ((k % 2) == 0)
	{
		for (i = k + 1; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (j - 1) / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
