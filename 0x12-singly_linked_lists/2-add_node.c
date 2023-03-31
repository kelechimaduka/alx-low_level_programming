#include <stddef.h>
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
 * add_node - add node
 *
 * @head: position of list
 * @str: string
 *
 * Return: Success
 */

list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *j;
	list_t *k;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	k = *head;
	j = malloc((len + 1) * sizeof(char));
	if (j == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		j[i] = str[i];
	k = malloc(sizeof(list_t));
	if (k == NULL)
	{
		free(j);
		return (NULL);
	}
	k->str = j;
	k->len = len;
	k->next = *head;
	*head = k;
	return (k);
}
