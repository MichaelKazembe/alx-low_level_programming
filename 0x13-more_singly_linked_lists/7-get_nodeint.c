#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a listint_t linked list
 * @head: pointer to a head of a node of linked list
 *@index: index of the node to be returned, starting at 0
 *
 * Return: pointer to nth node,or NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
