#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -as seen
 *
 * Return: return success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (n > 0)

	{
		printf("%d is positive\n", n);
	}

	for (n = 0)

	{
		printf("%d is zero\n", n);
	}

	for (n < 0)

	{
		printf("%d is negative\n", n);
	}

	return (0)
}

