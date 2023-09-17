#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory space by using malloc
 * @b: size of bytes to allocate
 *
 * Return: pointer that points to the allocated memory space
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
