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
	char *s;

	s = malloc(ac * strlen(av[i]) * sizeof(char));

	if (ac == 0 || *av == NULL)
	{
		return (NULL);
	}

	while (i < ac)
	{
		s[i] = *av[i];
		printf("\n");
		i++;
	}
	return (s);
}
