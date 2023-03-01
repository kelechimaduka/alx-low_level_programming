#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * *dest: destination string
 *
 * *src: source string
 *
 * Return: Success
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; j < 98; j++)
		{
			dest[i + j] = src[j];
		}
		return (dest);
	}
}
