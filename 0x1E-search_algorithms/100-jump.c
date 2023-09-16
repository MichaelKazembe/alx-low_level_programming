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
	int low = 0;
	size_t jump = sqrt(size);
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i += jump)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		if (array[i] < value)
			low = (i);
		else
			break;
	}

	printf("Value found between indexes [%d] and [%lu]\n", low, i);

	for (i = low; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
