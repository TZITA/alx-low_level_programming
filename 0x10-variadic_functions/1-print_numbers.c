#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - entry point
 * @separator: separator
 * @n: integer
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		int val = va_arg(p, int);

		printf("%d", val);
		printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
