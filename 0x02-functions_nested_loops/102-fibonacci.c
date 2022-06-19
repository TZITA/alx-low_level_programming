#include <stdio.h>

/**
 * fibonacci - lists the fibonacci numbers
 * @n: the maximum number
 *
 * Return: Always 0.
 */

int fibonacci(int n)
{
	if (n == 1 || n == 2)
	{
		return (1);
	}
	else
	{
		return (fibonacci(n - 1) + fibonacci(n - 2));
	}
}


/**
 * main -check the code
 *
 * Retur: Always 0.
 */

int main(void)
{
	int n = 50;
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", fibonacci(i));
		printf(", ");
	}
	return (0);
}
