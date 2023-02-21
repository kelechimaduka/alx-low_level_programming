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
	char* value = "_putchar";

	putchar(_putchar(value));

	return (0);
}
