#include "search_algos.h"

/**
 * binary_search - searches for value using the Binary search algorithm
 * @array: Array to be searched
 * @size: Number of elements in array
 * @value: value to be serached in the array
 *
 * Return: Index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t findex = 0;
	size_t lindex = size - 1;
	size_t mindex, i;

	if (array == NULL)
	{
		return (-1);
	}

	while (findex <= lindex)
	{
		printf("Searching in array: ");
		for (i = findex; i < lindex; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[lindex]);
		mindex = (findex + lindex) / 2;
		if (array[mindex] == value)
		{
			return (mindex);
		}
		else if (array[mindex] < value)
		{
			findex = mindex + 1;
		}
		else
		{
			lindex = mindex - 1;
		}
	}
	return (-1);
}
