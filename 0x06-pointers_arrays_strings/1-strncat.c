#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenate two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes allowed
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char s2 = *src;
	char *ptr = dest + strlen(dest);

	while (s2 != '\0' && n--)
	{
		*ptr++ = s2++;
	}
	*ptr = '\0';

	return (dest);
}
