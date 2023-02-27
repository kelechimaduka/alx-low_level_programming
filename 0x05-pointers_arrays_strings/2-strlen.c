#include "main.h"

/**
 * _strlen - length of a string
 *
 * @s: pointer
 *
 * Return: success
 */

int _strlen(char *s)
{
	char leng;
	int i = 0;

	leng = s[0];
      
	while (leng != '\0')
	{
		i++;
		leng = s[i-1];
	}
	return (i-1);
}
