#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

/* Prints a character */
int _putchar(char c);

/* Checks uppercase */
int _isupper(int c);

/* Checks digit from 0 to 9*/
int _isdigit(int c);

/* Checks for lowercase character */
int _islower(int c);

/* Copies a string */
char *_strncpy(char *dest, char *src, int n);

/* Checks for alphabetic character */
int _isalpha(int c);

/* Computes the absolute value of an integer */
int _abs(int n);

/* Returns the length of a string */
int _strlen(char *s);

/* Prints a string followed by a new line, to stdout */
void _puts(char *str);

/* Convert a string to an integer */
int _atoi(char *s);

/* Concatenates two strings */
char *_strcat(char *dest, char *src);

/* Concatenates two strings */
char *_strncat(char *dest, char *src, int n);

/* Compares two strings */
int _strcmp(char *s1, char *s2);

/* Fills memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);

/* Copies memory area */
char *_memcpy(char *dest, char *src, unsigned int n);

/* Locates a character in a string */
char *_strchr(char *s, char c);

/* Gets the length of a prefix substring */
unsigned int _strspn(char *s, char *accept);

/* Searches a string for any of a set of bytes */
char *_strpbrk(char *s, char *accept);

/* Locates a substring */
char *_strstr(char *haystack, char *needle);

/* Copies the string pointed src, to the buffer pointed dest */
char *_strcpy(char *dest, char *src);

#endif /* HOLBERTON_H */
