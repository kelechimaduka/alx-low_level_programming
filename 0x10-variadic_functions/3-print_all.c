#include "variadic_functions.h"

/**
 * print_all - prints all concerned elements
 *
 * @format: all arguments
 *
 * Return: Success
 */

void print_all(const char * const format, ...)
{
	va_list listall;
	unsigned int i = 0, j, k = 0;
	char *string;
	const char all_args[] = "cifs";

	va_start(listall, format);
	while (format && format[i])
	{
		j = 0;
		while (all_args[j])
		{
			if (format[i] == all_args[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(listall, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(listall, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(listall, double)), k = 1;
				break;
			case 's':
				string = va_arg(listall, char *), k = 1;
				if (!string)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		} i++;
	}
	printf("\n"), va_end(listall);
}
