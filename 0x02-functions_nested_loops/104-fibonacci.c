#include "holberton.h"

/**
 * main - Entry point that prints the first 98 Fibonacci numbers
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int ant = 0;
	unsigned long int new = 0;
	unsigned long int sum = 1;

	for (i = 0; i < 98; i++)
	{
		new = sum + ant;
		printf("%llu", new);
		ant = sum;
		sum = new;
		if (i < 49)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
