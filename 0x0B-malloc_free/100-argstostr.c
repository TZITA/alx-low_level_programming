#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - entry point
 * @ac: int
 * @av: args
 *
 * Return: Always 0.
 */

char *argstostr(int ac, char **av)
{
	int i = 0;
	int len = strlen(av[i]);
	char *s;

	s = malloc(ac * strlen(av[i]) * sizeof(char));

	if (ac == 0 || *av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (i = 0; i < len; i++)
		{
			s[i] = *av[i];
		}
		printf("\n");
	}
	return (s);
}
