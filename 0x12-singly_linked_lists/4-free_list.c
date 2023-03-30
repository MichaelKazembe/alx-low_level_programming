#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head node of the linked list
 * return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

}
