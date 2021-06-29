#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>

/* Prints a character */
int _putchar(char c);

/* Takes a pointer to an int and updates the value it point to to 98 */
void reset_to_98(int *n);

/* Swaps the values of two integers */
void swap_int(int *a, int *b);

/* Returns the length of a string */
int _strlen(char *s);

/* Prints a string followed by a new line, to stdout */
void _puts(char *str);

/* Prints a string, in inverse, followed by a new line */
void print_rev(char *s);

/* Reverses a string */
void rev_string(char *s);

/* Prints every other character of a string */
void puts2(char *str);

/* Prints second half of a string, followed by a new line */
void puts_half(char *str);

/* Prints n elements of an array of integers, followed by a new line */
void print_array(int *a, int n);

/* Copies the string pointed src, to the buffer pointed dest */
char *_strcpy(char *dest, char *src);

/* Convert a string to an integer */
int _atoi(char *s);

#endif /* HOLBERTON_H */
