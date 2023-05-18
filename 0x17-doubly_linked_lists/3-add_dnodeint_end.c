#include "lists.h"

/**
 * add_dnodeint_end - adds node at end of list.
 * @head: head address of linked list.
 * @n: number of new value for new node
 * Return: address of new node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newNode;
	newNode->prev = current;
	return (newNode);
}
