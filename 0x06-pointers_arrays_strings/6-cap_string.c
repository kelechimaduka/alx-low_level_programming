#include "main.h"

/**
 * cap_string - change string to uppercase
 *
 * @n:string
 *
 * Return: success
 */

char *cap_string(char *n)
{
	int i, j;
	int z = 32;
	int symbols[] = {',', ';', '"', '.', '?',
		'(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - z;
		}

		z = 0;

		for (j = 0; j <= 12; j++)
		{
			if (n[i] == symbols[j])
			{
				j = 12;
				z = 32;
			}
		}
	}
	return (n);
}
