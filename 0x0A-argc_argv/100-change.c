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
		for (i = 0; i < 5; i++)
		{
			while (*argv[1] >= coins[i])
			{
				*argv[1] = *argv[1] - coins[i];
				count++;
			}
			if (*argv[1] == 0)
			{
				break;
			}
		}
		printf("%d\n", count);
	}
	return (0);
}
