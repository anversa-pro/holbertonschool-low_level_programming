#include "holberton.h"

/**
 * *malloc_checked - allocates memory
 * @b: size of memory to alloc
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == 0)
		return (NULL);
	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
