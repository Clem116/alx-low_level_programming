#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_my_buff(char *filename);
void close_file(int fd);

/**
 * create_my_buffer - Allocates 1024 bytes for a buffer.
 * @filename: File name of the file buffer is storing chars for.
 *
 * Return: Newly-allocated buffer.
 */
char *create_my_buffer(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - File Descriptor for copying
 * @fd: Cloed file
 * Return: Always -1
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(98);
	}
}

/**
 * main - Duplicates files from one file to another
 * @argc: Arguments to be executed
 * @argv: Pointer arrays the arguments
 *
 * Return: Success, Always (0)
 *
 * Description: 97, Error Exit Code
 * 98, Error if No file is found or is Read Only
 * 99, Error if No file cannot be created or written
 * 100, Error, If file cant be closed
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_my_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		w = write(to, buff, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		r = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}

