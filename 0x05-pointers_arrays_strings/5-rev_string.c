#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i;

	for (i = 10; i >= 0; i++)
		printf("%d", s[i]);
}
