#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: singly linked list
 *
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t elements = 0;
	const listint_t *current;

	current = h;
	while (current != NULL)
	{
		printf("%d\n", h->n);
		current = current->next;
		elements++;
	}
	return (elements);

}
