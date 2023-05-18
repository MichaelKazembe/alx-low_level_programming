#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes node at index of list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to be deleted (starts at 0).
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if ((*head) == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			free(*head);
			*head = (*head)->next;
			(*head)->prev = NULL;
			return (1);
		}
		free(*head);
		(*head) = NULL;
		return (1);
	}
	current = *head;
	while (current->next && count != index)
	{
		count++;
		current = current->next;
	}
	if (count == index)
	{
		if (current->next != NULL)
		{
			current->next->prev = current->prev;
			current->prev->next = current->next;
			free(current);
		}
		else
		{
			current->prev->next = NULL;
			free(current);
		}
		return (1);
	}
	return (-1);
}
