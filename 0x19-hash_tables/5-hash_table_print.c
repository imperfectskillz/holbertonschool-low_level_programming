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
	int punc = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (index < ht->size)
	{
		head = ht->array[index];
		while (head != NULL)
		{
			if (punc == 0)
			{
				punc = 1;
				printf("'%s': '%s'", head->key, head->value);
			}
			else
			{
				printf(", ");
				printf("'%s': '%s'", head->key, head->value);
			}
			head = head->next;
		}
		index++;
	}
	printf("}\n");
}
