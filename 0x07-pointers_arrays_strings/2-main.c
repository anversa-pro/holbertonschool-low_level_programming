#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;
    char *i = "\0";

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }

    f = _strchr(i, '\0');
    if (f != NULL)
	    printf("%s\n", f);
    return (0);
}
