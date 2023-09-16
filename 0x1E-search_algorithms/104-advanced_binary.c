#include "search_algos.h"

/**
 * recursive_binary_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int recursive_binary_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (recursive_binary_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (recursive_binary_search(array, half + 1, value));

	half++;
	return (recursive_binary_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of the array to search in
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index where 'value' is located, or -1 if not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = recursive_binary_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
