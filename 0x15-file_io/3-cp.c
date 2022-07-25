#include "main.h"
#include <stdio.h>

/**
 * main - e p
 * @ac: int
 * @av: char
 *
 * Return: Nothing.
 */

int main(int ac, char **av)
{
	int file_from;
	int file_to;
	char *c = malloc(sizeof(char) * 1024);

	if (ac != 3)
	{
		return (97);
	}

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[0]);
		return (98);
	}

	file_to = open(av[2], O_WRONLY | O_TRUNC);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[1]);
		return (99);
	}

	if (close(file_from) != 0)
	{
		dprintf(2, "Error: Can't close %s\n", av[1]);
		return (100);
	}

	read(file_from, c, 1024);
	close(file_from);
	return (0);
}

