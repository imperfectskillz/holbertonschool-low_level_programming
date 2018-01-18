#include "hash_tables.h"

/**
 * hash_table_delete - deletes
 * @ht: ht
 *Return: none
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *current;
	hash_node_t *next;

	if (ht == NULL)
		return;

	while (index < ht->size)
	{
		current = ht->array[index];
		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
