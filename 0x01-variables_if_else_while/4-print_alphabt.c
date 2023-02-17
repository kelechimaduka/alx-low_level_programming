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
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		{
			if (alph != 'q' && alph != 'e')

			{
				putchar(alph);
			}

		}

	putchar('\n');

	return (0);
}
