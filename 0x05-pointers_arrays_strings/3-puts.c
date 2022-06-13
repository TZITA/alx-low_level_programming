#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - puts strings to stdout
 * @str: string
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i, p;
	p = *str;

	for (i = 0; i < strlen(p); i++)
		_putchar(p[i]);
	putchar('\n');
}
