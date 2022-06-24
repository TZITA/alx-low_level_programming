#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: 2D array
 * @size: size of the square matrix
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + *((int *)a + i * size + j);
			}
			else if ((i + j) == (size - 1))
			{
				sum2 = sum2 + *((int *)a + i * size + j);
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
