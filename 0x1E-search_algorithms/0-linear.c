#include "search_algos.h"

/**
 * linear_search - searches for a value using the Linear search algorithm
 * @array: Array to be searched
 * @size: Number of elements in the array
 * @value: Value to be searched for in the array
 *
 * Return: The first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
