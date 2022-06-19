#include <stdio.h>

/**
 * fibonacci - lists the fibonacci numbers
 * @n: number of fibonacci
 *
 * Return: Always 0.
 */

int fibonacci(int n)
{
	if (n == 1 || n == 2)
		return (1);
	else
		return (fibonacci(n - 1) + fibonacci(n - 2));
}

/**
 * main -check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("%d", fibonacci(i));
		printf(", ");
	}
	return (0);
}
