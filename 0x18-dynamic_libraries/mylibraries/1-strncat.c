#include "main.h"

/**
 * _strncat - concatenates two strings
 * *@dest: input array to add content
 * *@src: input array to append
 * @n: bytes from src to copy
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 0;

	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
		j++;
	while (k < i && k < n)
	{
		dest[j] = src[k];
		k++;
		j++;
	}
	return (dest);
}
