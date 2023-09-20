#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -prints array on a new line
 * @array: array pointer
 * @size:numbers of element to print
 * @action:pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int num;

	if (array == NULL || action == NULL)
		return;

	for (num = 0; num < size; num++)
	{
		action(array[num]);
	}
}
