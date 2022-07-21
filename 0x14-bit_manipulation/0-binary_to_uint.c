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
	unsigned int bcon = atoi(b);

	if (b == NULL)
	{
		return (0);
	}
	while (bcon != 0)
	{
		rem = bcon % 10;
		dec = dec + rem*w;
		bcon = bcon / 10;
		w = w * 2;
	}
	return (dec);
}
