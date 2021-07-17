#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

/* Allocates memory using malloc */
void *malloc_checked(unsigned int b);

/* Concatenates two strings */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* Allocates memory for an array, using malloc */
void *_calloc(unsigned int nmemb, unsigned int size);

/* Creates an array of integers */
int *array_range(int min, int max);

/* reallocates a memory block using malloc and free */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /* HOLBERTON_H */
