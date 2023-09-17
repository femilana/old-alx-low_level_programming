#include "main.h"
#include <stdlib.h>

/**
 * array_range -creates array of int
 * @min:min value
 * @max:max value
 * Return:pointer to the generated array
 * if min > mix, returns NULL
 * if malloc fails, returns NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int num;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (num = 0; min <= max; num++, min++)
		ptr[num] = min;

	return (ptr);
}
