#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i;
	int n;
	int len = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
	{
		n = len / 2;
		for (i = n; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		n = (len - 1) / 2;
		for (i = n; i < len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
