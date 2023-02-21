#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Description: As stated above
 *
 * Return: Success valye
 */

void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
