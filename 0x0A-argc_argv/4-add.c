#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (argc > 1)
		{
			sum = sum + **argv++;
			printf("%d\n", sum);
		}
	
		else if (argc <= 1)
		{
			printf("0\n");
		}
		else
		{
			printf("Error\n");
		}
	}
	return (0);
}
