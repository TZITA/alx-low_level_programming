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

	printf("%lu, ", a);
	for (i = 0; i < 97; i++)
	{
		if (i < 96)
		{
			c = a + b;
			a = b;
			b = c;
			printf("%lu, ", a);
		}
		else
			printf("%lu", a);
	}
	printf("\n");
	return (0);
}
