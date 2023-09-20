#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main -Entry point
 * @argc:Argument supplied
 * @argv:Array Pointer to argument
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num, num1;
	char *ptr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num = atoi(argv[1]);
	ptr = argv[2];
	num1 = atoi(argv[3]);

	if (get_op_func(ptr) == NULL || ptr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*ptr == '/' && num1 == 0) ||
	    (*ptr == '%' && num1 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(ptr)(num, num1));

	return (0);
}
