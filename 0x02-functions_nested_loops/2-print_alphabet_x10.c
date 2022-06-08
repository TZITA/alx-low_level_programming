#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - function declaration
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');
}
