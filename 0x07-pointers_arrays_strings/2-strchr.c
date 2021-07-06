#include "holberton.h"

/**
 * *_strchr - locates a character in a string
 * *@s: pointer to a string
 * @c: character to find
 * Return: a pointer to the first occurrence of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (s[0] == c)
		return (&s[0]);
	return (NULL);
}
