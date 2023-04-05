#include "lists.h"
/**
 * insert_nodeint_at_index -inserts a new node at a given position.
 * @head: pointer to a head of a node of linked list
 * @idx:  index of the list.Index starts at 0
 *@n: integer to add to the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *temp, *new_node;

	if (head == NULL)
		return (NULL);

	temp = *head;
	while (temp != NULL && count != idx - 1)
	{
		temp = temp->next;
		count++;
	}

	if (count != idx - 1 && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx != 0)
	{
		new_node->next = temp->next;
		temp->next = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
