#include <stdio.h>
#include <stdlib.h>

/**
 * main - ep
 * @argc: num
 * @argv: array
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, j;
	int (*add)(int, char **) = main;
	unsigned char opc;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (j = 0; j < i; j++)
	{
		opc = *(unsigned char *)add;
		printf("%.2x", opc);

		if (j == i - 1)
		{
			continue;
		}
		printf(" ");
		add++;
	}
	printf("\n");
	return (0);
}
