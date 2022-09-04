#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int c;
	unsigned long int h1;
	unsigned long int h2;
	int i;

	for (i = 0; i < 92; i++)
	{
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;
	}
	ah1 = a / 10000000000;
	bh1 = b / 10000000000;
	ah2 = a % 10000000000;
	bh2 = b % 10000000000;

	for (i = 93; i < 99; i++)
	{
		h1 = ah1 + bh1;
		h2 = ah2 + bh2;
		if (ah2 + bh2 > 9999999999)
		{
			h1 = h1 + 1;
			h2 = h2 % 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (i != 98)
		{
			printf(", ");
		}
		ah1 = bh1;
		ah2 = bh2;
		bh1 = h1;
		bh2 = h2;
	}
	printf("\n");
	return (0);
}
