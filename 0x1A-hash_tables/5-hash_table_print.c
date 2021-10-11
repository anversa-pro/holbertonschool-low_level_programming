#include "hash_tables.h"
/**
 * hash_table_print - Function that that prints a hash table.
 * @ht: Hash table to print
 * Return: None
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int index, boolean = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (boolean == 1)
				printf(", ");

			printf("'%s': '%s'", temp->key, temp->value);
			boolean = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
