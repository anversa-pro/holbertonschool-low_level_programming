#include "holberton.h"

/**
 * _strlen - calculate the length of a string
 * @s: input parameter char
 * Return: Int with the length of a string
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
