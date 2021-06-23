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

	for (i = 0; i < 50; i++)
	{
		new = sum + ant;
		printf("%d", new);
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
