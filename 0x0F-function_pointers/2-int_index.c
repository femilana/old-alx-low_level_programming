#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index -return index
 * @array: array
 * @size: size of elements in the array
 * @cmp: pointer to function
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int num;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (num = 0; num < size; num++)
	{
		if (cmp(array[num]))
			return (num);
	}
	return (-1);
}
