#include "main.h"

/**
 * *_strstr - locates a substring
 * *@haystack: pointer to a string
 * *@needle: pointer to a substring
 * Return: a pointer to the first occurrence
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k = 0, l = 0;

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
	if (haystack[i] == needle[j])
		return (&haystack[i]);
	return (NULL);
}
