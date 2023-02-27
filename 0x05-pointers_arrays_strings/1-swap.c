#include "main.h"

/**
 * swap_int - swaps value
 *
 * @a: swap content of variable
 *
 * @b: swap content of variable b
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	a = &b;
	b = &a;
}
