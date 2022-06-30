#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * @argc: number
 * @argv: args
 *
 * Return: N1xn2.
 */

int main(int argc, char *argv[])
{
	int i;
	int mult;

	argc = 3;
	if (argc != 3 || sizeof(argv[1]) > 4 || sizeof(argv[2]) > 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mult = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", mult);
	}
	return (0);
}
