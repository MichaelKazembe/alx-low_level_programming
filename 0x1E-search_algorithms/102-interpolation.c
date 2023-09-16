#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array using
 *                        Interpolation Search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: Index of the first occurrence of 'value' or -1 if not found.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	size_t low, high;
	double pos_factor;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		pos_factor = (double)(high - low) / (array[high] - array[low])
			* (value - array[low]);
		pos = (size_t)(low + pos_factor);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

		if (low == high)
			break;
	}

	return (-1);
}
