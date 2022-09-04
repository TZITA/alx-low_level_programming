#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - entry point
 * @n: int
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	char n2 = n % 2;
	
	if (n > 1)
	{
		print_binary(n / 2);
	}
	_putchar(n2);
}
