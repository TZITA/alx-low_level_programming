#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate a random password for 101-crackme file
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int pswd[64];
       	int i, n;
	int sum = 0;

	srand(time(NULL));
	for (i = 0; i < 64; i++)
	{
		pswd[i] = rand() % 78;
		sum+= pswd[i] + '0';
		putchar(pswd[i] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
