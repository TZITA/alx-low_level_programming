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
	int i;
	int sum = 0;

	
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			sum = sum + *argv[i];
			printf("%d\n", sum);
		}
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
