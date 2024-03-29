#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hash table.
 * @key: key of the hash.
 * Return: value of the hash.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;

	if (ht == NULL)
	{
		return (NULL);
	}

	if (key == NULL || *key == '\0')
	{
		return (NULL);
	}

	index = key_index((unsigned char *)key, ht->size);

	item = ht->array[index];

	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}

	return (NULL);
}
