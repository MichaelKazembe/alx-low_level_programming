#include "search_algos.h"
/**
 * print_array - print values of actual array
 * @array: array given as parameter
 * @left: left index of the array
 * @right: right index of the array
 * Return: void
 */
void print_array(int *array, int left, int right)
{

	while (left <= right)
	{
		if (left < right)
			printf("%d, ", array[left]);
		else
			printf("%d", array[left]);
		left = left + 1;
	}
	printf("\n");
}
/**
 * binary_search - performs binary search over a given array
 * @array: given array
 * @size: array size
 * @value: value to search
 * Return: index of value if it's found otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int begin, end, middle;

	if (array == NULL)
		return (-1);

	begin = 0;
	end = (int)size - 1;
	while (begin <= end)
	{
		printf("Searching in array: ");
		print_array(array, begin, end);
		middle = (double)((begin + end) / 2);
		if (array[middle] == value)
			return ((int)middle);
		else if (value > array[middle])
			begin = middle + 1;
		else
			end = middle - 1;
	}
	return (-1);
}
