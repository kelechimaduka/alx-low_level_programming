#include <stdio.h>
#include "main.h"

/**
 * main - main
 *
 * Return: success
 */

int main(void)
{
	int i, j, k;

	for (i = 1; i <= 100; i++)
	{
		j = i % 3;

		k = i % 5;

		if (j == 0 && k == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (j == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (k == 0)
		{
			printf("Buzz ");
			continue;
		}
		else
		{
			printf("%d ", i);

		}
	}
_putchar('\n');
}
