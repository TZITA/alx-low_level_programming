#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 1;
	unsigned long int c;
	int i;

	for (i = 0; i < 98; i++)
	{
		if (i < 97)
		{
			printf("%lu", a);
			printf(", ");
			c = a + b;
			a = b;
			b = c;
		}
		else
		{
			printf("%lu", a);
		}
	}
	return (0);
}
