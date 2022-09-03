#include "main.h"

/**
 * print_last_digit - entry point
 * @n: integer
 *
 * Return: Int.
 */

int print_last_digit(int n)
{
	int res;

	res = (n % 10);
	if (res < 0)
	{
		res *= -1;
	}
	_putchar(res + '0');
	return (res);
}
