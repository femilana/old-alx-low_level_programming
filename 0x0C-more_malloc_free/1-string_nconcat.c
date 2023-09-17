#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concat (n) bytes of a particular str to another str
 * @s1: string to add or append to
 * @s2: string to concatenate or take from
 * @n: size of bytes  from s2 to concatenate to s1
 *
 * Return: pointer pointing to the outpuuted string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a = 0, b = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!ptr)
		return (NULL);

	while (a < len1)
	{
		ptr[a] = s1[a];
		a++;
	}

	while (n < len2 && a < (len1 + n))
		s[a++] = s2[b++];

	while (n >= len2 && a < (len1 + len2))
		ptr[a++] = s2[b++];

	ptr[a] = '\0';

	return (ptr);
}
