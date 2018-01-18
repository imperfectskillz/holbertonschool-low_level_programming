#include "hash_tables.h"
/**
 * hash_table_get - value of key
 * @ht: hash table
 *@key: key
 *Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	unsigned long int index = 0;

	index = key_index((const unsigned char *)key, ht->size);
	if (key == NULL)
		return (NULL);
	if (ht->array[index] == NULL)
		return (NULL);
	return (ht->array[index]->value);
}
