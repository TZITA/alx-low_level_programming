#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char CH = 'a';
	int i = 0;

	for (i = 0; i < 10; i++)
		putchar(i);
	for (CH = 'a'; CH <= 'f'; CH++)
		putchar(CH);
	putchar('\n');

	return (0);
}
