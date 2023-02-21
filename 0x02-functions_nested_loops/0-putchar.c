#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the content of c
 *
 * main- to call functions
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
 * main- to call functions
 *
 * Return: Value val
 */

int main(void)

{
	char val = _putchar(_putchar);

	return (val);
}
