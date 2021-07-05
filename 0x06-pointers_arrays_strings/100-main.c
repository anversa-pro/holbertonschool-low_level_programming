#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;
    char n[] = "ROT13(\"Talk is cheap. Show me the code ([#CisFun, #CisAwesome])\")\n";
    char *m = 0;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", n);
    printf("------------------------------------\n");
    printf("%s", n);
    printf("------------------------------------\n");
    m = rot13(n);
    printf("%s", n);
    printf("------------------------------------\n");
    printf("%s", m);
    printf("------------------------------------\n");
    return (0);
}
