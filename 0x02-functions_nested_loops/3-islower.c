#include "main.h"
#include <stdio.h>

/**
 * _islower - entry point
 * @c: int
 *
 * Return: Int.
 */

int _islower(int c)
{
	int i;

	for (i = 'a'; i < 'z'; i++)
	{
		if (c == i)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	return (0);
}
