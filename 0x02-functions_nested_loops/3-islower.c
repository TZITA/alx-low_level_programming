#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _islower - entry point
 * @c: int
 *
 * Return: Int.
 */

int _islower(int c)
{
	int i;
	char arr[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if (c == arr[i])
		{
			_putchar('1');
			exit(0);
		}
	}
	_putchar('0');
	return (0);
}
