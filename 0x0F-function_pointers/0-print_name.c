#include "function_pointers.h"

/**
 * print_name - prints a nme
 *
 * @name: name
 * @f: function pointer
 *
 * Return: Success
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
