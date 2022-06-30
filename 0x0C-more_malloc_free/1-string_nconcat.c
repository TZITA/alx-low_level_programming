#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - entry p
 * @s1: string1
 * @s2: string2
 * @n: integer
 *
 * Return: 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int s1_len = strlen(s1);
	int size = s1_len + n;
	int i;

	ptr = malloc(size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_len; i++)
	{
		if (s1 == NULL)
		{
			ptr[i] = ' ';
		}
		else
		{
			ptr[i] = s1[i];
		}
	}
	for (i = s1_len; i < size; i++)
	{
		if (s2 == NULL)
		{
			ptr[s1_len] = ' ';
		}
		else
		{
			ptr[i] = s2[i];
		}
	}
	return (ptr);
}
