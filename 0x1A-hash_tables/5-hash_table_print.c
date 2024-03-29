#include "hash_tables.h"

/**
 * hash_table_print - function that retrieves a value associated with a key.
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int is_first = 1;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (!is_first)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			is_first = 0;
			node = node->next;
		}
	}

	printf("}\n");

}

