#include "3-calc.h"
/**
 * op_add - sum two integers
 * @a: input number 1 to add
 * @b: input number 2 to add
 * Return: result of sum a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two numbers
 * @a: input number 1 to substract
 * @b: input number 2 to substract
 * Return: result of substraction a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two numbers
 * @a: input number 1 to mult
 * @b: input number 2 to mult
 * Return: result of multiplication a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: input number 1 dividend
 * @b: input number 2 divisor
 * Return: result of divison a/b
 **/
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}
/**
 * op_mod - calculates module of two integers
 * @a: input number 1 dividend
 * @b: input number 2 divisor
 * Return: remainder of a % b
 **/
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
