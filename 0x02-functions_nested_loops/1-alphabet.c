#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - function declaration
 *
 * Return: void
 */

void print_alphabet(void)
{
	int ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}
