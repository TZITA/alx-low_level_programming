#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - entry point
 * @separator: separator char
 * @n: integer
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
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
		const char *val = va_arg(p, char *);

		if (val == NULL)
		{
			val = "(nil)";
		}
		if (i != n - 1)
		{
			printf("%s", val);
			printf("%s", separator);
		}
		else
		{
			printf("%s", val);
		}
	}
	printf("\n");
	va_end(p);
}
