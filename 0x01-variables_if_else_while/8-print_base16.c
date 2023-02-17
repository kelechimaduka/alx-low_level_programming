#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -as seen
 *
 * Return: return success
 */

int main(void)

{
	char ALPH;
	int num;

	for (num = 0; num <= 9; num++)
	{
	putchar((num % 10) + '0');
	}
	for (ALPH = 'a'; ALPH <= 'f'; ALPH++)
	{
		putchar(ALPH);
	}

	putchar('\n');

	return (0);
}
