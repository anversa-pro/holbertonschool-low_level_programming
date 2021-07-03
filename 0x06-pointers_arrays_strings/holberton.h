#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>

/* Prints a character */
int _putchar(char c);

/* Cooncatenates two strings */
char *_strcat(char *dest, char *src);

/* Concatenates two strings */
char *_strncat(char *dest, char *src, int n);

/* copies a string */
char *_strncpy(char *dest, char *src, int n);

/* compares two strings*/
int _strcmp(char *s1, char *s2);

/* reverses the content of an array of integers */
void reverse_array(int *a, int n);

/* Changes all lowercase letters of a string to uppercase */
char *string_toupper(char *);

/* Capitalizes all words of a string */
char *cap_string(char *);

/* Encodes a string into 1337 */
char *leet(char *);

/* encondes a string using rot13 */
char rot13(char *);

/* prints an integer */
void print_number(int n);

/* adds two numbers */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/* prints a buffer */
void print_buffer(char *b, int size);

#endif /* HOLBERTON_H */
