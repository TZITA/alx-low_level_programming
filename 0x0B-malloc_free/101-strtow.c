#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - entry point
 * @str: string
 *
 * Return: Always 0.
 */

char **strtow(char *str)
{
	long unsigned int s_len = 0;
	int i = 0;
	int cnt = 0;
	char **arr;
	int w_len;
	int w_dep;
	int cnt_index = 0;
	int x;
	int a;
	int c;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			cnt ++;
		}
		i++;
	}

	arr = malloc((cnt + 2) * sizeof(char *));

	for (a = 0; a < (cnt + 2); a++)
	{
		w_len = 0;
		while (s_len < strlen(str) + 1)
		{
			s_len++;
			if (str[x] == ' ' || str[x] == '\0')
			{
				cnt_index = x;
				arr[a] = malloc(w_len * sizeof(char));

				for (c = (cnt_index - w_len); c < cnt_index; c++)
				{
					arr[a][w_dep] = str [c];
					w_dep++;
				}
				arr[a][w_len] = '\0';
				w_len = 0;
				x++;
				break;
			}
			w_len++;
			x++;
		}
	}
	arr[cnt + 2] = NULL;
	return (arr);
}
