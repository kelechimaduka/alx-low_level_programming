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
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
