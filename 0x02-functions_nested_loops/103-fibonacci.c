#include "holberton.h"

/**
 * main - Entry point that prints the first 50 Fibonacci numbers
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long ant = 0;
	long new = 0;
	long sum = 1;
	long even = 0;

	for (i = 1; i <= 35; i++)
	{
		new = sum + ant;
		printf("%ld", new);
		ant = sum;
		sum = new;
		if ((i % 2) != 0 && new < 4000000)
			even = even + new;
	}
	printf("%ld", even)
	putchar('\n');
	return (0);
}
