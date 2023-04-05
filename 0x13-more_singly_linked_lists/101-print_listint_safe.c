#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *node;

	node = NULL;
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		node = head;
		head = head->next;

		if (node <= head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			printf("[%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}
	}
	return (count);
}
