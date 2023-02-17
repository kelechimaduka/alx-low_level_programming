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
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)

	{
		printf("Last digit of %d is %d ", n, last_digit);
		printf("and is greater than 5\n");

	}

	else if (last_digit > 0)

	{
		printf("Last digit of %d is %d ", n, last_digit);
		printf("and is less than 6 and not 0\n");
	}

	else if (last_digit < 0)

	{
		printf("Last digit of %d is %d ", n, last_digit);
		printf("and is less than 6 and not 0\n");
	}

	else

	{
		printf("Last digit of %d is %d and is zero\n", n, last_digit);
	}
	return (0);
}
