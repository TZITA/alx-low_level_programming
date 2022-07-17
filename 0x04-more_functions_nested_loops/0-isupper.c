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
	if (c == 'A' || c == 'B' || c == 'C' || c == 'D' || c == 'E')
	{
		return (1);
	}
	if (c == 'F' || c == 'G' || c == 'H' || c == 'I' || c == 'J')
	{
		return (1);
	}
	if (c == 'K' || c == 'L' || c == 'M' || c == 'N' || c == 'O')
	{
		return (1);
	}
	if (c == 'P' || c == 'Q' || c == 'R' || c == 'S' || c == 'T')
	{
		return (1);
	}
	if (c == 'U' || c == 'V' || c == 'W' || c == 'X' || c == 'Y' || c == 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
