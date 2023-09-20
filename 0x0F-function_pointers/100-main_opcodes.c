#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc:arguments number
 * @argv:arguments array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num, num1;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;

	for (num1 = 0; num1 < num; num1++)
	{
		if (num1 == num - 1)
		{
			printf("%02hhx\n", ptr[num1]);
			break;
		}
		printf("%02hhx ", ptr[num1]);
	}
	return (0);
}
