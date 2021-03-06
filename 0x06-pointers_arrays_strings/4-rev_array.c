#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * *@a: input array to reverse
 * @n: number of array elements
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = 0;

	while (i < n)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
