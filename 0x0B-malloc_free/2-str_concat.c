#include "holberton.h"
/**
* *str_concat - Function that concatenates two strings
* *@s1: Pointer to a newly allocated space in memory s1
* *@s2: string to add after s1
* Return: null in failure or empty string
*/
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j, k;

	if (s1 == NULL || s2 == NULL)
		return ("");
	for (i = 0; s1[i] != '\0'; i++)
		continue;
	for (j = 0; s2[j] != '\0'; j++)
		continue;
	s = malloc((i + j + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (k = 0; k <= i; k++)
	{
		s[k] = s1[k];
	}
	for (k = 0; k <= j; k++)
	{
		s[k + i] = s2[k];
	}
	s[k + i] = '\0';
	return (s);
}
