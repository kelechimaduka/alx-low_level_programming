#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the content of c
 *
 * @c : to be printed
 *
 * Description : to print _putchar
 *
 * Return: value 1.
 */

int _putchar(char c)
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
	int val;
	char* value = "_putchar";

	_putchar(char* value);

	return (0);
}
