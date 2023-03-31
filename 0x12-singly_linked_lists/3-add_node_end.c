#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - length of string
 *
 * @s: string
 *
 * Return: Success
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		;
	}
	return (i);
}

/**
 * _strdup - duplication
 *
 * @src: source
 *
 * Return: Success
 */
void *_strdup(const char *src)
{
	int len;
	int i;
	char *dest;

	len = _strlen(src);
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * add_node_end - add node
 *
 * @head: position of list
 * @str: string
 *
 * Return: Success
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *old;
	char *mstr;

	if (str == NULL)
		return (NULL);
	mstr = _strdup(str);
	if (mstr == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = mstr;
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	old = *head;
	while (old->next != NULL)
		old = old->next;
	old->next = new;
	return (*head);
}
