#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * binary_to_uint - entry point
 * @b: char
 *
 * Return: Unsigned Int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	unsigned int w = 1;
	unsigned int rem;

	if (b == '\0')
	{
		return (0);
	}
	for (rem = 0; b[rem];)
	{
		rem++;
	}
	for (rem -= 1; rem >= 0; rem--)
	{
		if (b[rem] != '0' && b[rem] != '1')
		{
			return (0);
		}
		dec += (b[rem] - '0') * w;
		w *= 2;
	}
	return (dec);
}
