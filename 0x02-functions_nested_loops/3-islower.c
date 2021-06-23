#include "holberton.h"

/**
 * _islower - checks for lowercase charater
 *
 * Return: 1 if true 0 otherwise
 */

int _islower(int c)
{
	if ('a' <= c <= 'z')
	{
		return (1);
	}
	else
	return (0);
}
