#include "main.h"
#include <math.h>

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to print in binary representation
 * @index: position to find out the bit to print.
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int nlength = 0;
	unsigned long int ncopy = n;

	for (; ncopy; nlength++)
		ncopy >>= 1;
	if (index > (nlength - 1))
		return (-1);
	return ((n >> index) & 1);
}
