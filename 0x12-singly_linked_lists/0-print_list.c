#include <stdio.h>
#include "lists.h"

/**
 * print_list -prints elements of a linked list
 * @h:pointer to the list_t list
 * Return:number of the nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t d = 0;

	while (h)
	{
		if (!g->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		d++;
	}

	return (d);
}