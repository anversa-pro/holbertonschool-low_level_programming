#include "holberton.h"

/**
 * _isupper - Checks for uppercase character.
 * @c: Input parameter
 * Return: 1 if true 0 false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 95)
	{
		return (1);
	}
	else
		return (0);
}
