#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies a string
 * @dest: a buffer
 * @src: the source
 *
 * Return: a pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
