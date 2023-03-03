#include "main.h"

/**
 * leet - replacements
 *
 * @n: integer
 *
 * Return: Success
 */

char *leet(char *n)
{
	int i, j;
	int from[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int to[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (n[i] == from[j])
			{
				n[i] = to[j / 2];
				j = 9;
			}
		}
	}
	return (n);
}
