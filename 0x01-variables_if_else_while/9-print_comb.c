#include <stdio.h>

/**
 * aaaaaaaaaaaaa
 *
 * aaaaaaaaaaaaaaaaa
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
		putchar(' ');
		putchar('\t');

	return (0);
}
