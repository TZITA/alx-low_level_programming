#include "main.h"
#include <stdio.h>

/**
 * _strlen - outputs the string length of a string
 * @s: string
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
