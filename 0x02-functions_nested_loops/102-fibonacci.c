#include <stdio.h>

/**
 * main -check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long int a = 1;
	long int b = 2;
	long int c;

	for (i = 0; i < 50; i++)
	{
		if (i < 49)
		{
			printf("%ld", a);
			printf(", ");
			c = a + b;
			a = b;
			b = c;
		}
		else
		{
			printf("%ld", a);
			printf("\n");
		}
	}
	return (0);
}
