#include "3-calc.h"

/**
 * op_sub - subtract numbers
 *
 * @i: first number
 * @j: second number
 *
 * Return: Success
 */

int op_sub(int i, int j)
{
	return (i - j);
}

/**
 * op_add - add numbers
 *
 * @i: first number
 * @j: second number
 *
 * Return: Success
 */

int op_add(int i, int j)
{
	return (i + j);
}

/**
 * op_mul - multiply numbers
 *
 * @i: first number
 * @j: second number
 *
 * Return: Success
 */

int op_mul(int i, int j)
{
	return (i * j);
}

/**
 * op_div - divides numbers
 *
 * @i: first number
 * @j: second number
 *
 * Return: Success
 */

int op_div(int i, int j)
{
	if (j == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (i / j);
}

/**
 * op_mod - gets modulus of two numbers
 *
 * @i: first number
 * @j: second number
 *
 * Return: Success
 */

int op_mod(int i, int j)
{
	if (j == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (i % j);
}
