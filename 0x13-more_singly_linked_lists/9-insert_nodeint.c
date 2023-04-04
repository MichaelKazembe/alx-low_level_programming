#include "lists.h"

/**
 * insert_nodeint_at_index -inserts a new node at a given position.
 * @head: pointer to a head of a node of linked list
 * @idx:  index of the list starts at 0
 *@n: integer to add to the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	while (idx != 0)
	{
		head = &((*head)->next);
		idx--;
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
