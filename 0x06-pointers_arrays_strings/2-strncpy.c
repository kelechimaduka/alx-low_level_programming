#include "main.h"

/**
 * *_strncpy - copies a string
 *
 * @dest: destination
 * @src: source
 * @n: integer
 *
 * Return: Success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
			while (i < n)
			{
				dest[i++] = '\0';
			}
		else
		{
			continue;
		}
	}

	return (dest);
}
