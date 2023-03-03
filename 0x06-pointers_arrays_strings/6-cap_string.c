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
	int i = 0;
	int j;
	int symbols[] = {',', ';', '"', '.', '?', '(', ')', '{', '}', ' ', '\n', '\t'};

	if (n[0] >= 'a' && n[0] <= 'z')
	{
		n[0] = n[0] - 32;
	}

	for (i = 1; n[i] != '\0'; i++)
	{
		for (j = 0; j <= 12; j++)
		{
			if (n[i] = symbols[j])
			{
				if (n[i + 1] = symbol[j])
				{
					n[i + 2] = n[i + 2] - 32;
				}
				else
				{
					n[i + 1] = n[i + 1] - 32;
				}
			}
		}
	}
	return (n);
}
