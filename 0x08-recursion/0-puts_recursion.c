#include "main.h"

/**
 * _puts_recursion - puts a string
 * @s: string
 *
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
}
