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
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	printf("Searching in array: %d", array);
	if (array[size / 2] == value)
	{
		return (size / 2);
	}
	else if (array[size / 2] > value)
	{

