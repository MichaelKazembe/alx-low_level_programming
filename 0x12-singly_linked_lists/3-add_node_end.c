#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to a pointer to the head node of the linked list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->addr = new_node->str;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		list_t *current_node = *head;

		while (current_node->next  != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}
	return (*head);
}
