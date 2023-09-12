#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index of the value if found, or -1 if not found or array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int mid;
	int right = size - 1;
	int i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

	mid = left + (right - left) / 2;

	if (array[mid] == value)
		return (mid);

	else if (value < array[mid])
		right = mid - 1;

	else
		left = mid + 1;
	}

	return (-1);
}
