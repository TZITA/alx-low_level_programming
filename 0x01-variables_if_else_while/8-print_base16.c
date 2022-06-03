#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;
	char CH = 'A';

	for (ch = 0; ch < 10; ch++)
		putchar(ch);
	for (CH = 'A'; CH <= 'F'; CH++)
		putchar(CH);
	putchar('\n');

	return (0);
}
