#include "main.h"
#include <stdio.h>

/**
 * get_endianness - processor endianness
 *
 * Return: Success
 */

int get_endianness(void)
{
	int i;
	char *j;

	i = 1;
	j = (char *)&i;
	return ((int)j[0]);
}
