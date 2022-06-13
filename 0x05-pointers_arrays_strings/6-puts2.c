#include "main.h"
#include <stdio.h>
#include <string.h>
#define N 10

/**
 * puts2 -puts every other char in a string
 * @str: string
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < N; i++)
	{
		if (str[i] % 2 == 0)
			break;
	}
	_putchar(str[i]);
}
