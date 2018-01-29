#include "hash_tables.h"

/**
 * shash_table_create - sorted hash
 * @size: array
 * Return: pointer
 */

shash_table_t *shash_table_create(unsigned long int size)
{
}

/**
 *shash_table_set - adds kv
 * @ht: ht
 * @key: key
 * @value: value
 *Return: 1 or 0
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
}

/**
 * node_sadd - adds node to table
 * @ht: ht
 * @node: node
 *Return: node
 */

shash_node_t *node_sadd(shash_table_t *ht, shash_node_t *node)
{
}

/**
 * snode_create - new hash
 * @key: key
 * @value: value
 * Return: pointer
 */

shash_node_t *snode_create(const char *key, const char *value)
{
}

/**
 * shash_table_get - retrieves value
 * @ht: ht
 * @key: key
 *Return: value
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
}

