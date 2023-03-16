#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 *
 * Return: Success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int i, r1, r2, r3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (r1 = 0; s1[r1] != '\0'; r1++)
		;

	for (r2 = 0; s2[r2] != '\0'; r2++)
		;

	if (n > r2)
	{
		n = r2;
	}

	r3 = r1 + n;

	t = malloc(r3 + 1);
	if (t == NULL)
	{
		return (NULL);
	}

	if (i = 0; 1 < r3; i++)
	{
		if (i < r1)
		{
			t[i] = s1[i];
		}
		else
		{
			t[i] = s2[i - r1];
		}
	}

	t[i] = '\0';

	return (t);
}
