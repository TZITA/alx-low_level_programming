#include "main.h"
#include <string.h>

/**
 * _puts_recursion - puts a string
 * @s: string
 *
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	unsigned long int i = 0;

	if (i > strlen(s))
	{
		return;
	}
	_putchar(s[i]);
	_puts_recursion(*s[i + 1]);
}
