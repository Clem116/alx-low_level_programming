#include "main.h"
/**
 * create_my_file - generates a  new file
 * @new_file: Pointer to the created file
 * @file_descriptor: points to string to be written
 * Return: Success if positive, and negative if it fails
 */
int create_my_file(const char *new_file, char *file_descriptor)
{
	int fd, c, len = 0;

	if (new_file == NULL)
		return (-1);

	if (file_descriptor != NULL)
	{
		for (len = 0; file_descriptor[len];)
			len++;
	}

	fd = open(new_file, O_CREAT | O_RDWR | O_TRUNC, 0600);
	c = write(fd, file_descriptor, len);

	if (fd == -1 || c == -1)
		return (-1);

	close(fd);

	return (1);

}
