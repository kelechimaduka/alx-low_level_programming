#ifndef LIST_H_
#define LIST_H_

#include <stddef.h>
/**
 * struct list_s - singly linked list
 *
 * @str: string
 * @lengthh: length
 * @next_item: next item
 *
 */
typedef struct list_s
{
	char *str;
	unsigned int lengthh;
	struct list_s *next_item;
}
list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _putchar(char c);

#endif
