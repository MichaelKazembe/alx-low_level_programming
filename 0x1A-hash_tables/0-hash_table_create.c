#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the hash table
 *
 * Return: A pointer to the newly created hash table,
 * or NULL if an error occurred
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_Table;
	unsigned long int i;


	hash_Table = malloc(sizeof(hash_table_t));

	if (hash_Table == NULL)
	{
		return (NULL);
	}

	hash_Table->size = size;
	hash_Table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_Table->array == NULL)
	{
		free(hash_Table);
		return (NULL);
	}

	for (i = 0; i < hash_Table->size; i++)
	{
		hash_Table->array[i] = NULL;

	}

	return (hash_Table);
}
