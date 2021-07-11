#include "holberton.h"

/**
 * evaluate_module - if module is zero the number isn't a prime number
 * @n: integer to evaluate
 * @f: divisor to test with n
 * Return: 1 if prime number 0 otherwise
 */
int evaluate_module(int n, int f)
{
	if (n == f)
		return (1);
	if (n % f == 0)
		return (0);
	return (evaluate_module(n, f + 1));
}

/**
 * is_prime_number - Evaluates a prime number
 * @n: input integer to evaluate
 * Return: 1 if n is prime number 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 2)
		return (0);
	return (evaluate_module(n, 2));
}
