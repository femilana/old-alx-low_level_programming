#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -add a node at the start of a linked list
 * @head:double pointer
 * @str:new string
 * Return:returns the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int num = 0;

	while (str[num])
		num++;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = num;
	ptr->next = (*head);
	(*head) = ptr;

	return (*head);
}
