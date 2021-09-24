#include "main.h"

/**
 * *_memcpy - copies memory area
 * *@dest: memory area to paste at
 * *@src: memory area to copy from
 * @n: number of bytes to copy
 * Return: a pointer to the copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
