#include "main.h"

/**
 * _strspn - prints length of prefix substring
 *
 * @s: string
 * @accept: string
 *
 * Return: Success
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, check, k;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				k++;
				check = 1;
			}
		}

		if (check == 0)
		{
			return (k);
		}
	}
	return (k);
}
