#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array  of size z and assign char c
 * @z: size of the array
 * @c: char to assign
 * Description: create array of size z and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int z, char c)
{
	char *str;
	unsigned int num;

	str = malloc(sizeof(char) * z);
	if (z == 0 || str == NULL)
		return (NULL);

	for (num = 0; num < z; num++)
		str[num] = c;
	return (str);
}
