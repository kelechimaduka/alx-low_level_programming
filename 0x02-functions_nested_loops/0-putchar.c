#include <unistd.h>
#include "main.h"

/**
 * tchar - function to print
 *
 * @c: the concerned argument
 *
 * Return: Result return
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

	tchar("95");
	tchar("112");
	tchar("u");
	tchar("t");
	tchar("c");
	tchar("h");
	tchar("a");
	tchar("r");
	tchar("\n");

	return (0);
}
