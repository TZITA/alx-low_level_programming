#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - entry p
 * @nmemb: mem
 * @size: int
 *
 * Return: 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = 0;

	ptr = malloc(nmemb * size);
	if (ptr == 0 || nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		return (ptr);
	}
}
