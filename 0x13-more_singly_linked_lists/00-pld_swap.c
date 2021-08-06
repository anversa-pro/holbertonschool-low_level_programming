#include "lists.h"

/**
 * swap_nodes- Function that swaps two places in a linked list
 * @head: Pointer to a pointer to the first element of list_t
 * @index1: Position in the linked list where the second element will be placed
 * @index2: Position in the linked list where the first element will be placed
 * Return: The address of the first element, or NULL if it failed
 */

listint_t swap_nodes(**head, int index1, int index2)
{
	listint_t *AddressIdx1 = NULL, *AddressIdx2 = NULL, *PreviousIdx1 = NULL, *PreviousIdx2 = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (PreviousIdx1 == PreviousIdx2)
	{
		printf("Tus index son iguales, por favor introduce uno diferente para poder hacer un cambio\n");
		return (1);
	}
	while ()
}