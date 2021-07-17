#include "holberton.h"

/**
 * *string_nconcat - concatenates two strings
 * *@s1: pointer to a string one
 * *@s2: pointer to a string two
 * @n: number of bytes from s2 to concatenate
 * Return: pointer to concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	ptr = malloc((sizeof(char) * (i + n)) + 1);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		ptr[j] = s1[j];
	for (j = 0; j < n && s2[j] != 0; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
