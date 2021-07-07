#include <stdio.h>
void main(void)
{
    int size = 3;
    int i, j, k;

    if (size > 0) // array [n][n]
    {
        for (i = size; i > 0; i--)
        {
            for (j = 1; j < i; j++)
            {
                putchar(' ');
            }
            for (k = 0; k <= (size - i); k++)
            {
                putchar('#');
            }
            putchar('\n');
        }
        putchar('\n');
    }
    if (size > 0) // array[0][0]
    {
        for (i = size; i > 0; i--)
        {
            for (j = 0; j < i; j++)
            {
                putchar('#');
            }
            putchar('\n');
        }
        putchar('\n');
    }
    
    if (size > 0) // array [n][0]
    {
        for (i = 0; i < size; i++)
        {
            for (k = 0; k < i; k++)
                  putchar('.');
            for (j = 0; j <(size - i); j++)
                  putchar('#');
            putchar('\n');
        }
    }
    if (size > 0) // array [0][n]
    {
        for (i = 0; i <= size; i++)
        {
            for (j = 0; j < i; j++)
                putchar('#');
            putchar('\n');
        }
    }
    else
        putchar('\n');
}
