#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates arguments
 *
 * @ac: arg1
 * @av: arg2
 *
 * Return: success
 */

char *argstostr(int ac, char **av)
{
	char *output;
	int i, j, k, l;

	if (ac == 0)
	{
		return (NULL);
	}

	for (i = j = 0; j < ac; j++)
	{
		if (av[j] == NULL)
		{
			return (NULL);
		}
		for (k = 0; av[j][k] != '\0'; k++)
		{
			i++;
		}
		i++;
	}

	output = malloc(sizeof(char) * (i + 1));

	if (output == NULL)
	{
		free(output);
		return (NULL);
	}

	for (j = k = l = 0; l < i; k++, l++)
	{
		if (av[j][k] == '\0')
		{
			output[l] = '\n';
			j++;
			l++;
			k = 0;
		}
		if (l < i - 1)
			output[l] = av[j][k];
	}
	output[l] = '\0';
	return (output);
}
