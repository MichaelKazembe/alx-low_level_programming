#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump Search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: Index of the first occurrence of 'value' or -1 if not found.
 */

int jump_search(int *array, size_t size, int value)
{
	int step, prev, i;

	if (array == NULL || size == 0)
		return (-1);

	step = 0;
	prev = 0;
	while (step < (int)size && array[step] < value)
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, step);

	for (i = prev; i <= step && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
