#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print all values in the list
 *
 * @h: list
 *
 * Return: Success
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (str[i] == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (i);
}