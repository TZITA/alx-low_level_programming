#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - main function
 * @s1: str 1
 * @s2: str 2
 *
 * Return: S1S2.
 */

char *str_concat(char *s1, char *s2)
{
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	char *ptr;
	int size  = s1_len + s2_len + 1;
	int j = 0;

	ptr = (char *)malloc(sizeof(char) * size);

	for (j = 0; j < s1_len; j++)
	{
		if (s1 == NULL)
		{
			ptr[0] = ' ';
		}
		else
		{
			ptr[j] = s1[j];
		}
	}
	for (j = 0; j < s2_len; j++)
	{
		if (s2 == NULL)
		{
			ptr[s1_len] = ' ';
		}
		else
		{
			ptr[s1_len + j] = s2[j];
		}
	}
	ptr[size - 1] = '\0';
	return (ptr);
}
