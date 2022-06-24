#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number of args
 * @argv: args
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int count = 0;
	int i;

	if (argc == 2)
	{
		if (**argv >= 0)
		{
			for (i = 0; i < 5; i++)
			{
				while (**argv >= coins[i])
				{
					**argv = **argv - coins[i];
					count = count + 1;
				}
				if (**argv == 0)
				{
					break;
				}
			}
			printf("%d\n", count);
		}
		else
		{
			printf("0\n");
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
