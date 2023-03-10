#include "main.h"
int size(char *s);
int pal(char string[], int x, int y);

/**
 * is_palindrome - returns success for palindrome string
 *
 * @s: string
 *
 * Return: Success
 */

int is_palindrome(char *s)
{
	int strlen = size(s);

	if (strlen == 0)
	{
		return (1);
	}
	else
	{
		return (pal(s, 0, strlen - 1));
	}
}

/**
 * size - length of a string
 *
 * @s: string
 *
 * Return: Success
 */

int size(char *s)
{
	if (*s != '\0')
	{
		return (1 + size(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * pal - checker
 *
 * @string: string
 *
 * @x: string starts
 *
 * @y: string ends
 *
 * Return: Success
 */

int pal(char string[], int x, int y)
{
	if (x >= y)
	{
		return (1);
	}
	else if	(string[x] != string[y])
	{
		return (0);
	}
	else if (x <= y || x < y + 1)
	{
		return (pal(string, x + 1, y - 1));
	}
	else
	{
		return (1);
	}
}
