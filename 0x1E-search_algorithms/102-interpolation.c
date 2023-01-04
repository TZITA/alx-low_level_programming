#include "search_algos.h"

/**
 * interpolation_search - searches for a value using Interpolation search algorithm
 * @array: Array to be searched
 * @size: Number of items in array
 * @value: Value to be searched in array
 *
 * Return: Index where value is located.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	while (value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (array[pos] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			low = pos + 1;
		}
		else if (array[pos] > value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			high = pos - 1;
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			return (pos);
		}
	}
	if (value == array[low])
	{
		return (low);
	}
	else
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
}
