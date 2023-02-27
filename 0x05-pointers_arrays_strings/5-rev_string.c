#include "main.h"

/**
 * rev_string - prints reverse characters
 *
 * @s: string to be displayed
 *
 * Return: success please
 */

void rev_string(char *s)
{
	int i;
	int count = 0;
	char j = s[0];

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		count--;
		j = s[i];
		s[i] = s[count];
		s[count] = j;
	}

}
