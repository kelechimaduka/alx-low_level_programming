#include <unistd.h>
#include "main.h"

/**
 * tchar - writes the content of c
 *
 * @c : to be printed
 *
 * Description : to print _putchar
 *
 * Return: value 1.
 */

int tchar(char *c)
{
	return (write(1, &c, 1));
}

/**
 * main- main code
 *
 * Return: return success
 *
 */
int main(void)
{

	tchar("_");
	tchar("p");
	tchar("u");
	tchar("t");
	tchar("c");
	tchar("h");
	tchar("a");
	tchar("r");
	tchar("\n");

	return (0);
}
