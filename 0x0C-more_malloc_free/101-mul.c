#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _zero -checks if any number is zero
 * @argv:argument
 * Return:nth
 */

void _zero(char *argv[])
{
	int num, n1 = 1, n2 = 1;

	for (num = 0; argv[1][num]; num++)
		if (argv[1][num] != '0')
		{
			n1 = 0;
			break;
		}

	for (num = 0; argv[2][num]; num++)
		if (argv[2][num] != '0')
		{
			n2 = 0;
			break;
		}

	if (n1 == 1 || n2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * *set_array -set memory space to zero in new array
 * @ptr: char array
 * @len:length of char array
 * Return:pointer of d char array
 */

char *set_array(char *ptr, int len)
{
	int count = 0;

	for (count = 0; count < len; count++)
		ptr[count] = '0';
	ptr[len] = '\0';
	return (ptr);
}

/**
 * num_len-estimates length of the number,
 * and checks if number is in base 10
 * @argv:argument
 * @num:row of the array
 * Return:length of the number
 */

int num_len(char *argv[], int num)
{
	int len;

	for (len = 0; argv[num][len]; len++)
		if (!isdigit(argv[num][len]))
		{
			printf("Error\n");
			exit(98);
		}

	return (len);
}

/**
 * main -Entry point of the program dat multiplies 2 +ve num
 * @argc:number of arguments
 * @argv: rguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int len1, len2, lenout, add, addl, i, j, k, ca;
	char *ptr;

	if (argc != 3)
		printf("Error\n"), exit(98);
	len1 = num_len(argv, 1), len2 = num_len(argv, 2);
	_zero(argv), lenout = len1 + len2, ptr = malloc(lenout + 1);
	if (ptr == NULL)
		printf("Error\n"), exit(98);
	ptr = set_array(ptr, lenout);
	k = lenout - 1, i = len1 - 1, j = len2 - 1, ca = addl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (ptr[k] - '0') + addl;
				if (add > 9)
					ptr[k - 1] = (add / 10) + '0';
				ptr[k] = (add % 10) + '0';
			}
			i = len1 - 1, j--, addl = 0, ca++, k = lenout - (1 + ca);
		}
		if (j < 0)
		{
			if (ptr[0] != '0')
				break;
			lenout--;
			free(ptr), ptr = malloc(lenout + 1), ptr = set_array(ptr, lenout);
			k = lenout - 1, i = len1 - 1, j = len2 - 1, ca = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (ptr[k] - '0') + addl;
			addl = add / 10, ptr[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", ptr);
	return (0);
}
