#include "main.h"

/**
 * read_textfile - entry point
 * @filename: file name
 * @letters: number
 *
 * Return: Number.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileo;
	int filer;
	char *c = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}

	fileo = open(filename, O_RDONLY);
	if (fileo < 0)
	{
		return (0);
	}
	filer = read(fileo, c, letters);
	if (filer < 0)
	{
		return (0);
	}
	write(STDOUT_FILENO, c, letters);
	return (filer);
}
