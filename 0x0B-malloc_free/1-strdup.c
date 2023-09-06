#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate on a new memory space location
 * @string: char
 * Return: 0
 */
char *_strdup(char *string)
{
	char *mal;
	int num, r = 0;

	if (string == NULL)
		return (NULL);
	num = 0;
	while (string[num] != '\0')
		num++;

	mal = malloc(sizeof(char) * (num + 1));

	if (mal == NULL)
		return (NULL);

	for (r = 0; string[r]; r++)
		mal[r] = string[r];

	return (mal);
}
