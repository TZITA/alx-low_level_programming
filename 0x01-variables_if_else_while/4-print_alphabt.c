#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch != 'q' && ch != 'e' && ch <= 'z')
	{
		putchar(ch);
		ch++;
	putchar('\n');
	}

	return (0);
}
