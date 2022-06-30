#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - entry point
 * @min: minumum
 * @max: maximum
 *
 * Return: 0.
 */

int *array_range(int min, int max)
{
	int i;
	int diff = max - min + 1;
	int *ptr;

	ptr =(int *) malloc(sizeof(int) * diff);

	for (i = 0; i <= diff; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
