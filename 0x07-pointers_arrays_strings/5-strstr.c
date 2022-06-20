#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: Pointer to the beginning substring
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

