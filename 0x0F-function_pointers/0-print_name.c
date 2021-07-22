#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * *@name: pointer to a char name input
 * *@f: pointer to a function that prints name and return nothing
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	f(name);
}
