#include <stdio.h>

/**
 * main -check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	int a = 1;
	int b = 2;
	int c;

	for (i = 0; i < 50; i++)
	{
		printf("%d", a);
		printf(", ");
		c = a + b;
		a = b;
		b = c;
	}
	return (0);
}
