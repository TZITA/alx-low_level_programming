#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char blank_space = \n;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar(blank_space);


	return (0);
}
