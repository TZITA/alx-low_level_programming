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
	if ((c == 'a') | (c == 'b') | (c == 'c') | (c == 'd') | (c == 'e'))
	{
		return (1);
	}
	else if ((c == 'g') | (c == 'h') | (c == 'i') | (c == 'j') | (c == 'k'))
	{
		return (1);
	}
	else if ((c == 'm') | (c == 'n') | (c == 'o') | (c == 'p') | (c == 'q'))
	{
		return (1);
	}
	else if ((c == 's') | (c == 't') | (c == 'u') | (c == 'v') | (c == 'w'))
	{
		return (1);
	}
	else if ((c == 'y') | (c == 'z') | (c == 'f'))
	{
		return (1);
	}
	else if ((c == 'l') | (c == 'r') | (c == 'x'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
