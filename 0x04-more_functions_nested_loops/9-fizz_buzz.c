#include <stdio.h>

/**
 * main - check  the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	return (0);
}
