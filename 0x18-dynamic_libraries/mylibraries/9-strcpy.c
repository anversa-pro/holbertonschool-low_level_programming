#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src
 * to the buffer pointed to * by dest
 * @dest: pointer buffer to return
 * @src: pointer source to copy
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
			dest[i] = src[i];
	}
	return (dest);
}
