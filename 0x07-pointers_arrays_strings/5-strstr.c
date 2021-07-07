#include "holberton.h"

/**
 * *_strstr - locates a substring
 * *@haystack: pointer to a string
 * *@needle: pointer to a substring
 * Return: a pointer to the first occurrence
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k, l;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				k = i + 1;
				l = j + 1;
				for (; needle[k] != '\0'; k++, l++)
				{
					if (needle[k] != haystack[l])
						return (NULL);
				}
				return (&haystack[j]);
			}
		}
	}
	return (NULL);
}
