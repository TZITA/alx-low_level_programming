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
	unsigned long int sum = 0;

	while (1)
	{
		c = a + b;
		if (c > 4000000)
		{
			break;
		}
		if (c % 2 == 0)
		{
			sum = sum + c;
		}
		
		a = b;
		b = c;
	}
	printf("%ld\n", sum);
	return (0);
}
