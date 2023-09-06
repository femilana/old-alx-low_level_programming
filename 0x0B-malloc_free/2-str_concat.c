#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and sum  together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int num, digit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	num = digit = 0;
	while (s1[num] != '\0')
		num++;
	while (s2[digit] != '\0')
		digit++;
	conct = malloc(sizeof(char) * (num + digit + 1));

	if (conct == NULL)
		return (NULL);
	num = digit = 0;
	while (s1[num] != '\0')
	{
		conct[num] = s1[num];
		num++;
	}

	while (s2[digit] != '\0')
	{
		conct[num] = s2[digit];
		num++, digit++;
	}
	conct[num] = '\0';
	return (conct);
}
