#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - entry point
 * @size: siz
 * @c: char
 *
 * Return: Char.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char __attribute__((unused)) *ptr;

	ptr = (char *) malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			_putchar(c);
		}
		return (ptr);
	}

	return (0);
}
