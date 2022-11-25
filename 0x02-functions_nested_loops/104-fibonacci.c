#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c;
	int i;

	for (i = 0; i < 98; i++)
	{
		if (i < 97)
		{
			c = a + b;
			printf("%lu, ", a);
			a = b;
			b = c;
		}
		printf("%lu", a);
	}

	return (0);
}
