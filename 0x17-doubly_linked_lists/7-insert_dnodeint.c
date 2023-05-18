#include "lists.h"
/**
 * insert_dnodeint_at_incount - Inserts a new node at a given position
 * @h: address of linked list
 * @idx: index to place list
 * @n: Value to be stored in the new node
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *newNode;

	if (h == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*h == NULL)
	{
		if (idx == 0)
		{
			*h = newNode;
			return (newNode);
		}
		free(newNode);
		return (NULL);
	}

	if (idx == 0)
	{
		newNode->next = *h;
		(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	current = *h;
	while (idx > 1 && current->next != NULL)
	{
		current = current->next;
		idx--;
	}

	if (idx > 1 || current == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = current->next;
	if (current->next != NULL)
		current->next->prev = newNode;
	current->next = newNode;
	newNode->prev = current;

	return (newNode);
}
