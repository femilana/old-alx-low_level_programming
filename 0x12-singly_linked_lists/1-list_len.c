#include <stdlib.h>
#include "lists.h"

/**
 * list_len -returns number of elements the  linked list
 * @h:A pointer to list_t list
 * Return:the number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
