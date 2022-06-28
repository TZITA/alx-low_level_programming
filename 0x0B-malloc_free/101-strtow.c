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
	int s_len = 0;
	int i = 0;
	int cnt = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			cnt ++;
		}
		i++;
	}

	char **arr;
	
	arr = malloc((cnt + 2) * sizeof(char *));

	int w_len = 0;
	int cnt_index = 0;
	int x = 0;
	int a;

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
				int w_dep = 0;
				int c;
				
				for (c = (cnt_index - w_len); c < cnt_index; c++)
				{
					chrctr = str[c];
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
