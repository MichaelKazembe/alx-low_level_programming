#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *delete_node;
	unsigned int count = 0;

	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}
	else
	{
		while (temp != NULL && count != index - 1)
		{
			count++;
			temp = temp->next;
		}
		if (count != index - 1)
			return (-1);
		delete_node = temp->next;
		temp->next = temp->next->next;
		free(delete_node);
		return (1);
	}

}
