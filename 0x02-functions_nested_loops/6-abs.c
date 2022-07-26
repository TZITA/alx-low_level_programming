#include <stdio.h>
#include "main.h"

/**
 * _abs - outputs absolute value of any number
 *
 * Return: 0
 */

int _abs(int r)
{
	if (r < 0)
	{
		r = r * -1;
	}
	return (r);
}
