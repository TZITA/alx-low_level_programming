#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c;
	int i;
	long int sum = 0;

	while (c <= 4000000)
	{
		for (i = 0; i < 4000000; i++)
		{
			c = a + b;
			if (c % 2 == 0)
			{
				sum = sum + c;
			}
			else
			{
				continue;
			}

			b = a;
			c = b;
		}
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
