#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: is the key you are looking for
 * @value: the value associated with the key
 * Returns:  the value associated with the element, or NULL if key
 * couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;


	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];

	if (item == NULL)
	{
		return (NULL);
	}

	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
		{
			return (item->value);

		}
		item = item->next;

	}

	return (NULL);

}
