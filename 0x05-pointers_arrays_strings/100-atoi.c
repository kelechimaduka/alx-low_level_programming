#include "main.h"

/**
 * _atoi - converts string to integer
 *
 * @s: string
 *
 * Return: Success
 */

int _atoi(char *s)
{
	int i = 0;
	int num[100];
	int sign;
	int x;

	if (s[0] == '-')
	{
		sign = -1;

		for (i = 1; s[i] != '\0'; i++)
		{
			num[i - 1] = s[i];
		}
		for (i = 0; num[i] <= 9; i++)
		{
			x = num[i];
		}
	return (sign * x);
	}
	else
	{
		return (x);
	}
}
