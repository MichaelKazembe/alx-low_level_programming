#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: the key. key can not be an empty string
 * @value: the value associated with the key
 * Returns: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_Node, *temp;

	if (ht == NULL || key == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];


	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}

		temp = temp->next;
	}

	new_Node = malloc(sizeof(hash_node_t));
	if (new_Node == NULL)
	{
		return (0);
	}

	new_Node->key = strdup(key);
	new_Node->value = strdup(value);
	new_Node->next = ht->array[index];
	ht->array[index] = new_Node;

	return (1);

}
