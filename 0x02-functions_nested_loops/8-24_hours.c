#include "main.h"

/**
 * jack_bauer - jack idk
 *
 * Return: success
 */

void jack_bauer(void)
{
	int n = 0;

	for (n = 0; n <= 23; n++)
	{
		int m = 0;

		for (n = 0; n <= 59; n++)
		{
			_putchar(m / 10 + 48);
			_putchar(m % 10 + 48);
			_putchar(':');
			_putchar(n / 10 + 48);
			_putchar(n % 10 + 48);
			_putchar('\n');
		}
	}
}
