#include "main.h"
int prime_number(int n);

/**
 * is_prime_number - returns success for prime number
 *
 * @n: number
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n < 1)
	{
		return (0);
	}
	else
	{
		return (prime_number(n));
	}
}

/**
 * prime_number - shows prime number
 *
 * @n: number
 *
 * Return: Success
 */

int prime_number(int n)
{
	i = n % 2;

	if (i == 5)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
