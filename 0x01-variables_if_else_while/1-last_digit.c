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

	for (last_digit = 1; last_digit < 6; last_digit++)
	{
		printf("Last digit of %d is %d and is less than 6 and not
			0\n", n, last_digit);
	}
	if (last_digit > 5)

	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}

	else

	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}

	return (0);
}

