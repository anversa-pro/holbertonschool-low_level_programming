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
		if ((new % 2) == 0 && ant < 4000000)
		{
			even = even + new;
		}
		ant = sum;
		sum = new;
	}
	printf("%ld\n", even);
	return (0);
}
