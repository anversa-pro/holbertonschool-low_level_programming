#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>

/*Function that prints a name */
void print_name(char *name, void (*f)(char *));

/* Function that executes a function given as a parameter on each element of an array */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Function that searches for an integer */
int int_index(int *array, int size, int (*cmp)(int));

/* Function that selects the correct function to perform the operation asked by the user */
int (*get_op_func(char *s))(int, int);

/* returns the sum of a and b */
int op_add(int a, int b);

/* returns the difference of a and b */
int op_sub(int a, int b);

/* returns the product of a and b */
int op_mul(int a, int b);

/* returns the result of the division of a by b */ 
int op_div(int a, int b);

/* returns the remainder of the division of a by b */
int op_mod(int a, int b);

#endif  /* FUNCTION_POINTERS_H */