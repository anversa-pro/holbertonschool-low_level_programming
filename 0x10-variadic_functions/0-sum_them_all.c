#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all arguments
 * @n: number of arguments
 * Return: sum result or 0 if n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
