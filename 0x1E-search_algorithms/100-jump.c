#include "search_algos.h"
#include <math.h>

/**
 * jump_search -  searches for a value using the Jump search algorithm
 * @array: Array to be searched
 * @size: Number of elements in array
 * @value: Value to search for in array
 *
 * Return: Index where value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t aa = 0;
	size_t bb = sqrt(size);
	size_t i, diff;

	if (array == NULL)
		return (-1);

	while (aa < size)
	{
		printf("Value checked array[%ld] = [%d]\n", aa, array[aa]);
		if (array[bb] < value)
		{
			aa = bb;
			bb = bb + sqrt(size);
		}
		else
		{
			printf("Value found between indexes [%ld] and [%ld]\n", aa, bb);
			for (i = aa; i <= bb; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
				{
					return (i);
				}
			}
		}
	}
	diff = bb - aa;
	aa = aa - diff;
	bb = bb - diff;
	printf("Value found between indexes [%ld] and [%ld]\n", aa, bb);
	for (i = aa; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}
