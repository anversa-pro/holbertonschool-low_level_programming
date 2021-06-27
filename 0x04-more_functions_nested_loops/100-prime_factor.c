#include "holberton.h"

/**
 * main - Prints de largest prime factor
 * Return: 0 always
 */

int main(void)
{
	long int i;
	long int primef = 612852475143;

	for (i = 2; i < primef; i++)
	{
		if ((primef % i) == 0)
		{
			primef = primef / i;
			i = 2;
		}
	}
	printf("%lu\n", primef);
	return (0);
}
