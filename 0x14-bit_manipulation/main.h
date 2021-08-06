#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* Function that converts a binary number to an unsigned int */
unsigned int binary_to_uint(const char *b);

/* Function that prints the binary representation of a number */
void print_binary(unsigned long int n);

/* Function that returns the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* Function that sets the value of a bit to 1 at a given index */
int set_bit(unsigned long int *n, unsigned int index);

/* Function that sets the value of a bit to 0 at a given index */
int clear_bit(unsigned long int *n, unsigned int index);

/* Returns the number of bits needed to flip to get from 1 number to another */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Function that checks the endianness */
int get_endianness(void);

/*Function that writes the character c to stdout*/
int _putchar(char c);

#endif /* MAIN_H*/
