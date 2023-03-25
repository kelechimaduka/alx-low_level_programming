#include "variadic_functions.h"

/**
 * print_numbers - prints concerned numbers
 *
 * @separator: seperator
 *
 * @n: integer
 *
 * Return: Success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list listnum;
	unsigned int i;

	va_start(listnum, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(listnum, int));
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(listnum);
}
