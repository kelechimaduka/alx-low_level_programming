#include "main.h"

/**
 * conv_ - converts character to integer
 *
 * @i: character
 *
 * Return:success
 */

unsigned int conv_(char i)
{
	return ((unsigned int) i - '0');

}

/**
 * _strlen - length of string
 *
 * @c: string
 *
 * Return: Success
 */

unsigned int _strlen(const char *c)
{
	unsigned int j;

	for (j = 0; c[j]; j++)
		;
	return (j);
}

/**
 * binary_to_uint - converts string to decimal
 *
 * @b: string
 *
 * Return: Success
 */

unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int output, temp_store, j;

	if (!b)
		return (0);
	output = temp_store = 0;
	j = 1;
	for (i = _strlen(b) - 1; b[k]; k--, j *= 2)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
		temp_store = conv_(b[k]);
		output += temp_store * j;
	}
	return (output);
}
