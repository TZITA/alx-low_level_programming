#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - entry point
 * @array: array
 * @size: size
 * @cmp: pointer to functions
 *
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int  i;

	if (size <= -1)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (0);
}
