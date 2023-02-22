#include "main.h"

/**
 * print_times_table - prints time table
 *
 * @n: integer concerned
 *
 * Return: success value
 */

void print_times_table(int n)
{
	int j = 0;
	int i = 0;
	int k;

	if (n > 15 && n < 0)
	{
		_putchar(0);
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				{
					if (k >= 10)
					{
						_putchar(k / 10 + 48);
						_putchar(k % 10 + 48);
					}
					else
					{
						_putchar(k + 48);
					}

				_putchar(' ');
				_putchar(',');
				}
			}
		}
	}
	_putchar('\n');
}
