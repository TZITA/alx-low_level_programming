#include "main.h"

/**
 * puts2 -puts every other char in a string
 * @str: string
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i = i + 2)
		_putchar(str[i]);
	_putchar('\n');
}
