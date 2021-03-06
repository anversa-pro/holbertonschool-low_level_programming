#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

/* Prints a character */
int _putchar(char c);

/* Creates an array of chars, and initializes it with a specific char */
char *create_array(unsigned int size, char c);

/* Returns a pointer to a newly allocated space in memory, */
/* which contains a copy of the string given as a parameter */
char *_strdup(char *str);

/* Concatenates two strings */
char *str_concat(char *s1, char *s2);

/* Returns a pointer to a 2 dimensional array of integers */
int **alloc_grid(int width, int height);

/* Frees a 2 dimensional grid previously created by your alloc_grid function */
void free_grid(int **grid, int height);

/* Concatenates all the arguments of your program */
char *argstostr(int ac, char **av);

/* Splits a string into words */
char **strtow(char *str);

#endif /* HOLBERTON_H */
