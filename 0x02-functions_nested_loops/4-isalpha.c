#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isalpha - entry point
 * @c: int
 *
 * Return: Int.
 */

int _isalpha(int c)
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
	else if ((c == 'y') | (c == 'z') | (c == 'f') | (c == 'A') | (c == 'B'))
	{
		return (1);
	}
	else if ((c == 'l') | (c == 'r') | (c == 'x') | (c == 'C') | (c == 'D'))
	{
		return (1);
	}
	else if ((c == 'E') | (c == 'F') | (c == 'G') | (c == 'H') | (c == 'I'))
	{
		return (1);
	}
	else if ((c == 'N') | (c == 'M') | (c == 'L') | (c == 'K') | (c == 'J'))
	{
		return (1);
	}
	else if ((c == 'O') | (c == 'P') | (c == 'Q') | (c == 'R') | (c == 'S'))
	{
		return (1);
	}
	else if ((c == 'T') | (c == 'U') | (c == 'V') | (c == 'X') | (c == 'Y'))
	{
		return (1);
	}
	else if ((c == 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
