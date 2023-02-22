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
	int m;
	int h;

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
					if (k >= 100)
					{
						_putchar(k / 100 + 48);
						m = k % 100;
						if (m < 10)
						{
							_putchar(48);
						}
						else
						{
							_putchar(m / 10 +48);
						h = m % 10;
						_putchar(h + 48);
						}

					else if (k >= 10)
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
		_putchar('\n');
		}
	}
}
