#include "holberton.h"

/**
 * *_memset - fills memory with a constant byte
 * *@s: pointer to buffer to fill
 * @b: constant to fill with the buffer
 * @n: number of bytes to fill
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
	}
	return (s);
}
