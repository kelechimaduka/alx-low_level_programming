#include <unistd.h>

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
