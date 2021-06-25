#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

/* Prints a character */
int _putchar(char c);

/* Checks uppercase */
int _isupper(int c);

/* Checks digit from 0 to 9*/
int _isdigit(int c);

/* Multiplies two integers */
int mul(int a, int b);

/* Prints the numbers from 0 to 9 */
void print_numbers(void);

/* Prints the numbers from 0 to 9 excepto 2 and 4 */
void print_most_numbers(void);

/* Prints 10 times the numbers from 0 to 14 */
void more_numbers(void);

/* Draws a straight line in the terminal */
void print_line(int n);

/* Draws a diagonal line on the temrinal */
void print_diagonal(int n);

/* Prints a square */
void print_square(int size);

/* Prints a triangle */
void print_triangle(int size);

/* Prints an integer */
void print_number(int n);

#endif /* HOLBERTON_H */
