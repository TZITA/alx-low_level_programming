#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - entry point
 * @n: integer
 *
 * Return: Int.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list p;

	va_start(p, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(p, int);
		}
		va_end(p);
	}
	return (sum);
}
