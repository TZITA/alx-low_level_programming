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

	for (i = 0; i < 98; i++)
	{
		if (i < 97)
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
		}
	}
	return (0);
}
