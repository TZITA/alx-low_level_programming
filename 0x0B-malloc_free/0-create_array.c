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
	unsigned int i = 0;
	char *ptr;

	ptr = (char *) malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			_putchar(c);
			i++;
		}
		return (ptr);
	}

	return (0);
}
