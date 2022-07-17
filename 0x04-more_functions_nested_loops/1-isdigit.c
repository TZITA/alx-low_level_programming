#include "main.h"
#include <stdio.h>

/**
 * _isdigit - entry point
 * @c: int
 *
 * Return: Integer.
 */

int _isdigit(int c)
{
	if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4')
	{
		return (1);
	}
	if (c == '5' || c == '6' || c == '7' || c == '8' || c == '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
