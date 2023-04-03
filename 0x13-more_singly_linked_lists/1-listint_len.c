#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: singly linked list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;
	const listint_t *current;

	if (h == NULL)
		return (elements);

	current = h;
	while (current != NULL)
	{
		current  = current->next;
		elements++;
	}
	return (elements);

}
