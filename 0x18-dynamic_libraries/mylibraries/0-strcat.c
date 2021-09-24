#include "main.h"

/**
 * _strcat - concatenates two strings
 * *@dest: input array to add content
 * *@src: input array to append
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k = 0;

	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
		j++;
	while (k < i)
	{
		dest[j] = src[k];
		k++;
		j++;
	}
	return (dest);
}
