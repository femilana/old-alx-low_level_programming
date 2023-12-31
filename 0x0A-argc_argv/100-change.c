#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of the money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int number, g, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	result = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	for (g = 0; g < 5 && number >= 0; g++)
	{
		while (number >= coins[g])
		{
			result++;
			number -= coins[g];
		}
	}

	printf("%d\n", result);
	return (0);
}
