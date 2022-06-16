#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two string
 * @dest: destination string
 * @src: source string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char s2 = *src;
	char *p = dest + strlen(dest);

	while (s2 != '\0')
	{
		*p++ = s2++;
	}
	*p = '\0';
	return (dest);
}
