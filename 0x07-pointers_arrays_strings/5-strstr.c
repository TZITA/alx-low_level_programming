#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: Pointer to the beginning substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *tmp;

	tmp = haystack;

	while (*tmp)
	{
		if (strncmp(tmp, needle, strlen(needle)) == 0)
		{
			return (tmp);
		}
		tmp++;
	}
	return (NULL);
}

