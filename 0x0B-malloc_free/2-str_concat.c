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
	int s1_len;
	int s2_len;
	char *ptr;
	int j = 0;

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	ptr = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));

	while (s1[j] != '\0')
	{
		s1[j] = ptr[j];
		j++;
	}
	while (s2[j] != '\0')
	{
		s2[j] = ptr[s1_len + j + 1];
		j++;
	}
	ptr[j] = '\0';
	return (0);
}
