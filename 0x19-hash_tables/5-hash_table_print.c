#include "hash_tables.h"

/**
 *hash_table_print - prints ht
 *@ht: hash
 *Return: none
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int index = 0;
	int comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (index < ht->size)
	{
		head = ht->array[i];
		while (head != NULL)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", head->key, head->value);
			head = head->next;
		}
		index++;
	}
	printf("}\n");
}
