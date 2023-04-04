#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to a head of a node of linked list
 *
 * Return: sum of all n data valies, 0 if list empty
 */

int sum_listint(listint_t *head)
{

	unsigned int sum_n = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum_n = sum_n + head->n;
		head = head->next;
	}

	return (sum_n);
}
