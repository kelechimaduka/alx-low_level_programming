#include "variadic_functions.h"

/**
 * print_strings - prints concerned strings
 *
 * @separator: seperator
 *
 * @n: integer
 *
 * Return: Success
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list listnum;
	unsigned int i;
	char *string;

	va_start(listnum, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(listnum, char *);

		if (string)
		{
			printf("%s", string);

		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
	}

	printf("\n");
	va_end(listnum);
}
