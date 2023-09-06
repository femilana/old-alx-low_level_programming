#include <stdlib.h>
#include "main.h"

/**
 * count_word - count the number of words in a string
 * @string: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *string)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; string[c] != '\0'; c++)
	{
		if (string[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - split string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int num, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (num = 0; num <= len; num++)
	{
		if (str[num] == ' ' || str[num] == '\0')
		{
			if (c)
			{
				end = num;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = num;
	}

	matrix[k] = NULL;

	return (matrix);
}
