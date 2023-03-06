#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a string
 *
 * @haystack: string
 * @needle: string
 *
 * Return: Success
 */

char *_strstr(char *haystack, char *needle)
{
	for (haystack = 0; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
