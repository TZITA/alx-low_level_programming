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
	unsigned long int i;

	for (i = 0; i < strlen(s); i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
