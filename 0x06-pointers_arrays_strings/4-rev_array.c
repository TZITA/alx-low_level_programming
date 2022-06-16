#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the contents of an array
 * @a: array
 * @n: integer
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i;
	int place_holder = 0;

	for (i = 0; i < (n / 2); i++)
	{
		place_holder = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = place_holder;
	}
}
