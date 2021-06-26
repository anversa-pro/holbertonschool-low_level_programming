#include "holberton.h"

/**
 * main - Prints numbers 1 to 100. Multiples of 3 and 5 change to FizzBuzz
 * Return: empty
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else if ((i % 3) == 0 && (i % 5) != 0)
			printf("Fizz");
		else if ((i % 3) != 0 && (i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
