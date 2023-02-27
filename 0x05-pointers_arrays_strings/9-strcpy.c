#include "main.h"

/**
 * *_strcpy - copies string from source to destination
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: destination value
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
