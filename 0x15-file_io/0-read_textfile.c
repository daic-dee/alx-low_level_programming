#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bfr;
	ssize_t j;
	ssize_t k;
	ssize_t l;

	j = open(filename, O_RDONLY);
	if (j == -1)
		return (0);
	bfr = malloc(sizeof(char) * letters);
	l = read(j, bfr, letters);
	k = write(STDOUT_FILENO, bfr, l);
	free(bfr);
	close(j);
	return (k);
}
