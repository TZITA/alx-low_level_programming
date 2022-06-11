#include <stdio.h>
#include "main.h"

/**
 * int _abs - outputs absolute value of any number
 * Return: 0
 */

int _abs(int r)
{
	if (r >= 0)
	{
		putchar(r);
	}
	else
	{
		r = r * -1;
		putchar(r);
	}
	return (0);
}
