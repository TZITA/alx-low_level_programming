#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - entry point
 * @array: array
 * @size: integer
 * @action: pointer to function
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
