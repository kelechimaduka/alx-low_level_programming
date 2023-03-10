#include "main.h"
#include <stdlib.h>

/**
 * str_concat - conatenates strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: success
 */

char *str_concat(char *s1, char *s2)
{
	char *output;
	unsigned int i, j, k, l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	output = malloc(sizeof(char) * (i + j + 1));

	if (output == NULL)
	{
		free(output);
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		output[k] = s1[k];
	}

	l = j;
	for (j = 0; j <= l; k++, j++)
	{
		output[k] = s2[j];
	}
	return (output);
}
