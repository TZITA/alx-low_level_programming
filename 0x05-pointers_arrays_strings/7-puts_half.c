#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the second half of a string
 * @str: string
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i;
	int n;
	int length_of_the_string = 10;

	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;
		{
			for (i = n; i < length_of_the_string; i++)
				_putchar(str[i]);
		}
	}
	else
	{
		n = (length_of_the_string - 1) / 2;
		{
			for (i = n; i < length_of_the_string; i++)
				_putchar(str[i]);
		}
	}
	printf("\n");
}
