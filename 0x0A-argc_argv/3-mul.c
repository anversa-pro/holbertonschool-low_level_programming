#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: arguments number
 * @argv: array of arguements
 * Return: result of multiplication or 1
 **/
int main(int argc, char *argv[])
{
	(void)argv;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
