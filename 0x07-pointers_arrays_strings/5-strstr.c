#include "holberton.h"

/**
 * *_strstr - locates a substring
 * *@haystack: pointer to a string
 * *@needle: pointer to a substring
 * Return: a pointer to the first occurrence
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k = 0, l;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				if (k == 0)
					l = i;
				i++;
				k++;
			}
			else
			{
				k = 0;
				break;
			}
		}
		if (needle[j] == '\0')
			return (&haystack[l]);
	}
	return (NULL);
}
