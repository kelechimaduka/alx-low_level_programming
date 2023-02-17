#include <stdio.h>

/**
 * main - As above stated
 *
 * Return: success please
 */

int main(void)

{
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');
			if (num1 == num2)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	return (0);

}
