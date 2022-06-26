#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - entry point
 * @str: string
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	int s_len;
	char *str2;
	char *s2_tmp;

	s_len = strlen(str);
	str2 = (char *) malloc(sizeof(char) * s_len + 1);

	if (str2 == NULL)
	{
		return ((char *)NULL);
	}

	s2_tmp = str2;
	while (*str)
	{
		*s2_tmp = *str;
		s2_tmp++;
		str++;
	}
	*s2_tmp = '\0';
	return (str2);
}
