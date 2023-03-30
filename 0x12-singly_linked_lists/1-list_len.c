#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to head node of linked list
 *
 * Return: number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current;

	if (h == NULL)
		return (count);

	current = h;

	while (current != NULL)
	{
		count = count + 1;
		current = current->next;
	}
	return (count);

}
