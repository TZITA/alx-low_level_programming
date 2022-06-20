#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 *
 * Return: Number of bytes in the initial segment s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int ptr = 0;

	if (s == NULL || accept == NULL)
	{
		return (ptr);
	}

	while (*s && strchr(accept, *s++))
	{
		ptr++;
	}
	return (ptr);
}
