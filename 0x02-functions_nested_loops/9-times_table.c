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
			if (t == 0)
			{
				_putchar(48);
				continue;
			}
			int val = t * r;
			_putchar(',');
			_putchar(' ');
			if (val > 9)
			{
				_putchar(val / 10 + 48);
				_putchar(val % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(val + 48);
			}
		}
		_putchar('\n');
	}
}
