#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diagonlas of a square matrix
 * *@a: pointer to data structure
 * @size: size of a square
 * Return: empty
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = size - 1, sumlr = 0, sumrl = 0;

	for (; i < (size * size); i += (size + 1), j += (size - 1))
	{
		sumlr += a[i];
		sumrl += a[j];
	}
	printf("%d, %d\n", sumlr, sumrl);
}
