#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursive binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @low: The starting index of the current subarray
 * @high: The ending index of the current subarray
 * @value: The value to search for
 *
 * Return: The index where 'value' is located, or -1 if not found
 */

int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
		else
			printf("\n");
	}

	i = low + (high - low) / 2;

	if (array[i] == value)
	{
		if (i == low || array[i - 1] != value)
			return (i);
		else
			return (advanced_binary_recursive(array, low, i, value));
	}
	else if (array[i] < value)
	{
		return (advanced_binary_recursive(array, i + 1, high, value));
	}
	else
	{
		return (advanced_binary_recursive(array, low, i, value));
	}
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: Index where 'value' is located, or -1 if not found.
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
