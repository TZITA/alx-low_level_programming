#include "main.h"
#include <stdio.h>

/**
 * fibonacci - lists the fibonacci numbers
 * @n: number of fibonacci numbers
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
