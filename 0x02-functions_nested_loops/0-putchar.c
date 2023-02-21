#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * tchar - function to print
 *
 * @c: the concerned argument
 *
 * Return: Result return
 */

int _putchar(char *c)
{
	return (write(1, &c, strlen(c)));
}

/**
 * main- main code
 *
 * Return: return success
 *
 */
int main(void)
{

	_putchar("_");
	_putchar("p");
	_putchar("u");
	_putchar("t");
	_putchar("c");
	_putchar("h");
	_putchar("a");
	_putchar("r");
	_putchar("\n");

	return (0);
}
