#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * *@n: number to print in binary representation
 * @index: position to find out the bit to print.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int nlength;
	unsigned long int *ncopy = n;

	for (; *ncopy; nlength++)
		*ncopy >>= 1;
	if ((index > (nlength - 1)) || n == NULL)
		return (-1);
	*n = ((1 << index) | *n);
	return (1);
}
