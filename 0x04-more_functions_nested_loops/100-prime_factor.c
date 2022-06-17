#include "stdio.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	long int n;
	long int divisor = 2;
	long int largFactor;
	n = 612852475143;

	while (n != 0)
	{
		if (n % divisor != 0)
			divisor = divisor + 1;
		else
		{
			largFactor = n;
			n = n / divisor;
			if (n == 1)
			{
				printf("%ld\n", largFactor);
				break;
			}
		}
	}
	return (0);
}
