#include "holberton.h"

/**
 * _islower - checks for lowercase charater
 * @c input character to evaluate
 * Return: 1 if true 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	return (0);
}
