#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("holberton");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    r = is_palindrome("");
    printf("%d\n", r);
    r = is_palindrome("\0");
    printf("%d\n", r);
    r = is_palindrome(012345);
    printf("%d\n", r);
    return (0);
}
