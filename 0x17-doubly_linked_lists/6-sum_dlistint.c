#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data in a doubly linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all the data, or 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;
	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
