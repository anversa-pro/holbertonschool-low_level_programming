#include "holberton.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: input prameter to evaluate
 *Return: 1 if true, 0 otherwise
 */

int m_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	return (0);
}
