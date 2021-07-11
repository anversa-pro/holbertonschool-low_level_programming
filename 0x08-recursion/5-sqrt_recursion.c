#include "holberton.h"
#include <stdio.h>

/**
 * find_roots - compares natural number pow with input number
 * @n: integer to evaluate
 * @r: natural number to compare
 * Return: root number or -1
 */
int find_roots(int n, int r)
{
	if (r * r == n)
		return (r);
	if (r * r > n)
		return (-1);
	return(find_roots(n, r + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to evaluate
 * Return: calculation or -1 if there is no natural square root
 */
int _sqrt_recursion(int n)
{
	int dig = n % 10;

	if (n < 0 || dig == 2 || dig == 3 || dig == 7 || dig == 8)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	if (n > 100000000)
		return (find_roots(n, 10000));
	if (n > 1000000)
		return (find_roots(n, 1000));
	return (find_roots(n, 1));
}
