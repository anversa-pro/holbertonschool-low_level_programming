#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: input parameter integer one
 * @b: input parameter integer two
 * Return: empty
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
