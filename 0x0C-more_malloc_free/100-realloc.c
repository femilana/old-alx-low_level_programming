#include "main.h"
#include <stdlib.h>

/**
 * _realloc -reallocates a memor space
 * @ptr:ptr to the memory formerly allocated
 * @old_size:size in bytes of d allocated space of ptr
 * @new_size:new size in bytes of d  new memory space
 * Return: ptr
 * if new_size is equal to d old_size,
 * returns ptr without any change
 * if malloc fails, returns NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
