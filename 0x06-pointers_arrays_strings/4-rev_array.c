#include "main.h"

/**
 * reverse_array - reverses the content of the array
 *
 * @a: array
 * @n: integer
 *
 * Return: success
 */

void reverse_array(int *a, int n)
{
	int, temp;

	for (i = 0; i < n; ++i)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
