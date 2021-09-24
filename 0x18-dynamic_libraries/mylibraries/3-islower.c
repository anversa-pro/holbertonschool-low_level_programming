#include "main.h"

/**
 * _islower - Checks for lowercase charater
 * @c: input parameter to evaluate
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
