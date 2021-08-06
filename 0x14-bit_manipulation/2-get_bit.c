#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to print in binary representation
 * @index: position to find out the bit to print.
 * return: the value of the bit at index index or -1 if an error occured 
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
