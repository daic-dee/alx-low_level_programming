#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_createbuff(char *f);
void _closefile(int f);

/**
 * _createbuff - Function that allocates 1024 bytes for a buffer.
 * @f: The name of the file buffer
 * Return: A pointer to the newly-allocated buffer.
 */
char *_createbuff(char *f)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", f);
		exit(99);
	}
	return (buff);
}

/**
 * _closefile - A function that closes file descriptors.
 * @f: The file descriptor to be closed.
 */
void _closefile(int f)
{
	int d;

	d = close(f);
	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}

/**
 * main - function that copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 * Description: If argument count is incorrect - exit code 97.
 * If filefrom does not exist or cannot be read - exit code 98.
 * If fileto cannot be created or written to - exit code 99.
 * If fileto or filefrom cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int fr, t, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = _createbuff(argv[2]);
	fr = open(argv[1], O_RDONLY);
	r = read(fr, buff, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fr == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		w = write(t, buff, r);
		if (t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		r = read(fr, buff, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buff);
	_closefile(fr);
	_closefile(t);
	return (0);
}

