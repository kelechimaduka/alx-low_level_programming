#include "main.h"

/**
 * times_table - prints the times table
 *
 * Return : success
 */

void times_table(void)
{
	int r;

	for (r = 0; r < 10; r++)
	{
		int t;

		for (t = 0; t < 10; t++)
		{
			int val = t * r;

			if (val < 10)
			{
				_putchar(val + 48);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(val / 10 + 48);
				_putchar(val % 10 + 48);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
