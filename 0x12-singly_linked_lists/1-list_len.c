#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - length of list
 *
 * @h: list
 *
 * Return: Success
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
