#include "holberton.h"
/**
* _strdup - returns a pointer to a newly allocated space in memory.
* *@str: string to duplicate
* Return: null if str is null or pointer on success
*/
char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		continue;
	s = malloc(i * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	s[j] = '\0';
	return (s);
}
