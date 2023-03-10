#include "main.h"
int root(int n, int i);

/**
 * _sqrt_recursion - returns square root of a number
 *
 * @n: number
 *
 * Return: Success
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (root(n, n - 1));
	}
}

/**
 * root - root of a number
 *
 * @n: number
 *
 * @i: root
 *
 * Return: Success
 */

int root(int n, int i)
{
	if (i == 0)
	{
		return (1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (root(n, i - 1));
	}
