#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a doubly linked list.
 * @h: Pointer to the pointer of the head of the list.
 * @idx: Index of the list where the new node should be added (starts at 0).
 * @n: Value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *newNode;
	unsigned int count = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = newNode;
		}
		*h = newNode;
		return (NULL);
	}

	current = *h;

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = newNode;
	}
	current->next = newNode;
	newNode->prev = current;

	return (newNode);
}
