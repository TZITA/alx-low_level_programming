#include "main.h"
#include <stdio.h>

/**
 * cpr - compares 2 strings
 * @s1: string1
 * @s2: string 2
 *
 * Return: True
 */
int cpr(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s2 == '\0');
}


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
		if ((*haystack == *needle) && cpr(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

