#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locates  a string and print
 *
 * @s: string
 * @accept: character
 *
 * Return: Success
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (NULL);
}
