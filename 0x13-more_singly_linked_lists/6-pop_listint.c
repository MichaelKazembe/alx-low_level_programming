#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to pointer to the head of the list
 *
 * Return: head node's data(n), otherwise if empty NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data_n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	data_n = temp->n;
	free(temp);

	return (data_n);

}
