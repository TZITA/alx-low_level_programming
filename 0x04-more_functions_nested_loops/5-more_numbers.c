#include "main.h"

/**
 * more_numbers - e p
 *
 * Return: Nothing.
 */
void more_numbers(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i < 9)
			{
				_putchar(i + '0');
			}
			else if (i > 9)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
		}
		_putchar('\n');
		j++;
	}
}

