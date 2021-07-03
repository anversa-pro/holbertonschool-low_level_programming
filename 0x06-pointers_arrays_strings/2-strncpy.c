#include "holberton.h"

/**
 * _strncpy - copy a string
 * *@dest: input array to add content
 * *@src: input array to append
 * @n: bytes from src to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 0;

	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
		j++;
	while (k < i)
	{
		dest[k] = src[k];
		k++;
		j++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
