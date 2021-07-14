#include "holberton.h"
/**
* *create_array - Creates an array of chars, and initializes it with a char.
* @size: size of the array
* @c: char to initialice the array
* Return: null if fails or size 0 otherwise pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	s = malloc((size + 1) * sizeof(char));
	if (s == NULL || size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
