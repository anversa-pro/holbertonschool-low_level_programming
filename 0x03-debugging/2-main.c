#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the largest of 3 integeres
 * Return: 0
 */

int main(void)
{
	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;

	largest = largest_number(a, b, c);

	printf("%d is the largest number", largest);

	return (0);
}
