#include "main.h"

/**
 * cap_string - change string to uppercase
 *
 * @n:string
 *
 * Return: success
 */

char *cap_string(char *n)
{
	int i = 0;

	n[0] = n[0] - 32;
	for (i = 1; n[i] <= 'z' && n[i] >= 'a'; i++)
	{
		if (n[i] = '\0' || n[i] = 46)
		{
			n[i + 1] = n[i + 1] - 32;
		}
	}
	return (n);
}
