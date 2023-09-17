#include "main.h"
#include <stdlib.h>

/**
 * _calloc -allocates memory space for an array
 * @nmemb:num of elements
 * @size:size of the  bytes
 * Return:pointer to the allocated memory space
 * if nmemb or size is zero, returns NULL
 * if malloc fails, returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int num;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (num = 0; num < (nmemb * size); num++)
		ptr[num] = 0;

	return (ptr);
}
