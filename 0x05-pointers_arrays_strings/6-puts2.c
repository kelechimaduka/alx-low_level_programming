#include "main.h"

/**
 * puts2 - puts character else the next
 *
 * @str: variable/pointeer
 *
 * Return: success
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
			continue;
	}
	_putchar('\n');
}
