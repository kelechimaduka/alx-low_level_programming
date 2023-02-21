#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the content of c
 *
 * @c : to be printed
 *
 * Description : to print _putchar
 *
 * Return: value 1.
 */

int _putchar(char c[20])
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
	int val = _putchar("_putchar");

	return (val);
}
