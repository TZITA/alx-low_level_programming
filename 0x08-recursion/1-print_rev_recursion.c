#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev_recursion - prints a string in reverse
 * @s: string
 *
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
