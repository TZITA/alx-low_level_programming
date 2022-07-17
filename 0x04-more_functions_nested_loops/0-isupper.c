#include "main.h"
#include <stdio.h>

/**
 * _isupper - entry point
 * @c: int
 *
 * Return: Intiger.
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
