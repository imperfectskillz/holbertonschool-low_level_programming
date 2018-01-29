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
	hash_node_t *temp;

	if (ht == NULL)
		return;

	while (index < ht->size)
	{
		current = ht->array[index];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
