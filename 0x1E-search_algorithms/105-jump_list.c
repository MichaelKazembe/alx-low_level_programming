#include "search_algos.h"

/**
 * move_list - helper function to move down list
 * @list: linked list
 * @jump: num of nodes to move
 * Return: pointer to list
 */

listint_t *move_list(listint_t *list, int jump)
{
	int i = 0;

	while (i < jump)
	{
		list = list->next;
		if (list->next == NULL)
			return (list);
		i++;
	}
	return (list);
}
/**
 * jump_list - jump list algorithm for singly linked list
 * @list: sorted linked list
 * @size: size of list
 * @value: value to search for
 * Return: index of value or null
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump;

	listint_t *runner = list;
	listint_t *prev;

	if (list == NULL)
		return (NULL);

	jump = sqrt((int)size);


	while (runner->n < value)
	{
		prev = runner;
		runner = move(runner, jump);
		if (runner->next == NULL)
		{
			printf("Value checked at index [%lu] = [%d]\n", runner->index, runner->n);
			break;
		}
		printf("Value checked at index [%lu] = [%d]\n",
		       runner->index, runner->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev->index, runner->index);
	while (prev->index <= runner->index)
	{
		if (prev->index == runner->index)
		{
			printf("Value checked at index [%lu] = [%d]\n",
			       prev->index, prev->n);
			if (prev->n == value)
			{
				return (prev);
			}
			else
			{
				return (NULL);
			}
		}

		if (prev->n == value)
		{
			printf("Value checked at index [%lu] = [%d]\n",
			       prev->index, prev->n);

			return (prev);
		}
		printf("Value checked at index [%lu] = [%d]\n",
		       prev->index, prev->n);
		prev = prev->next;
	}
	return (NULL);
}
