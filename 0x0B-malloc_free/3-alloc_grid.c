#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - main function
 * @width: width
 * @height: height
 *
 * Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int *grid;

	grid = (int *)malloc((width * height) * sizeof(int));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}


	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			printf("%d ", grid[i * width + j]);
		}
		printf("\n");
	}
	return (0);
}
