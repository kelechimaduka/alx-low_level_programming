#include "variadic_funtions.h"

/**
 * sum_them_all - adds all concerned numbers
 *
 * @n: integer
 *
 * Return: Success
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list listnum;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(listnum, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(listnum, int);
	}

	va_end(listnum);

	return (sum);
}
