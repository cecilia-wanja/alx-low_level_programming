#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int j;
	int i, y;
	char *k;
	if (!filename)
		return (0);
	j = open(filename, O_RDONLY);
	if (j < 0)
		return (0);
	k = malloc(sizeof(char) * letters);
	if (!k)
		return (0);
	i = read(j, k, letters);
	if (i < 0)
	{
		free(k);
		return (0);
	}
	k[i] = '\0';
	close(j);
	y = write(STDOUT_FILENO, k, i);
	if (y < 0)
	{
		free(k);
		return (0);
	}
	free(k);
	return (y);
}
