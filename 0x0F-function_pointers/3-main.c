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
	char *p;
	int final;

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
	if ((argv[2] == "/" || argv[2] == "%") && argv[3] == 0)
	{
		printf("Error\n");
		return (100);
	}
	
	p = get_op_func(argv[1]);
	
	return (0);
}
