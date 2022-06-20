#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: memory area 1
 * @src: memory area 2
 * @n: number of bytes
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}