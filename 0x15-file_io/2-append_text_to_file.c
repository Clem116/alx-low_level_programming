#include "main.h"
/**
 *append_text_to_file - appendstext to end of file
 *@new_file: points to file name
 *@text_descriptor: String to be appended to end of file
 *
 *Return: Negatine if file fails or is NULL
 *	If file does not exist, user lacks write permissions --1
 *	Otherwise - 1.
 */
int append_text_to_file(const char *new_file, char *text_descriptor)
{
	int a, t, len = 0;

	if (new_file == NULL)
		return (-1);

	if (text_descriptor != NULL)
	{
		for (len = 0; text_descriptor[len];)
			len++;
	}

	a = open(new_file, O_WRONLY | O_APPEND);
	t = write(a, text_descriptor, len);

	if (a == -1 || t == -1)
		return (-1);

	close(a);

	return (1);
}
