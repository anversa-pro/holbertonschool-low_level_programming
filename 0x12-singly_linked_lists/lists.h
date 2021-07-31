#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* function that prints all the elements of a list_t list */
Prototype: size_t print_list(const list_t *h);

/* function that returns the number of elements in a linked list_t list */
Prototype: size_t list_len(const list_t *h);

/* function that adds a new node at the beginning of a list_t list */
Prototype: list_t *add_node(list_t **head, const char *str);

/* function that adds a new node at the end of a list_t list */
Prototype: list_t *add_node_end(list_t **head, const char *str);

/* function that frees a list_t list */
Prototype: void free_list(list_t *head);

#endif /* HOLBERTON_H */
