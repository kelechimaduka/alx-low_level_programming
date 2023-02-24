#include <stdio.h>
#include <math.h>

/**
 * main - prints largest prime number
 *
 * Return: success
 */

int main(void)
{
	long i, larg;
	long num = 612852475143;
	double root = sqrt(num);

	for (i = 1; i <= root; i++)
	{
		if (num % i == 0)
		{
			larg = num / i;
		}
	}

	printf("%ld\n", larg);

	return (0);
}
