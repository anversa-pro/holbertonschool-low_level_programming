#include "holberton.h"

/**
 * *_strpbrk - Searches a string for anyof a set of bytes
 * *@s: pointer to a string
 * *@accept: bytes to search
 * Return: a pointer to the first occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		i++;
	}
	if (s[i] == accept[j])
		return (&s[i]);
	return (NULL);
}
