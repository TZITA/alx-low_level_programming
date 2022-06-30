#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - entry p
 * @b: integer
 *
 * Return: 0.
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	exit(0);
}
