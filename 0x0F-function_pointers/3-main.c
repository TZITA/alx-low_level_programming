#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: Always 0.
 */

int main(int *argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3])

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (argv[2] != "+" || !argv[2] = "-" || argv[2] != "*" || argv[2] != "/" || argv[2] != "%")
	{
		printf("Error\n");
		return (99);
	}
	if ((argv[2] == "/" || argv[2] == "%") && arvgv[3] == 0)
	{
		printf("Error\n");
		return (100);
	}
	
	return (0);
}
