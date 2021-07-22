#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function to calculate operation
 * @argc: argument counter
 * @argv: pointer to argument
 * Return: Always Success (0) Error if wrong conditions
 */

int main(int argc, char **argv)
{
	int a, b;
	int (*op_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_ptr = get_op_func(argv[2]);
	if (op_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op_ptr(a, b));
	return (0);
}