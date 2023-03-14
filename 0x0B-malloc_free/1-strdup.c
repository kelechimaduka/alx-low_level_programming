#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a memory space
 *
 * @str: string
 *
 * Return: success
 */

char *_strdup(char *str)
{
	char *output;
	unsigned int i, j;

	if (output == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;

	output = (char *)malloc(sizeof(char) * (i + 1));

	if (output == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		output[j] = str[j];
	}
	return (output);
}
