#include "main.h"
#include <stdio.h>

/**
 * _isupper - prints 1 when c is upper and 0 when c is lower
 * Return: 1
 */

int _isupper(char c)
{
	if (c == 'A') 
	{
		for (c = 'A'; c <= 'Z'; c++)
		return (1);
	}
	else if (c == 'a')
	{
		for (c = 'a'; c <= 'z'; c++)
		return (0);
	}

	return (0);
}
