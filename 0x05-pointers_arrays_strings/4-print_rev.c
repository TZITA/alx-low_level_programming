#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints the reverse of characters
 * @s: string
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i > 0; i++)
		_putchar(s[i]);
}
