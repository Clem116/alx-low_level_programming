#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * main - Program Entry point
 * main - A C Program that prints a line to the standard error
 * Return: (1) Success
 */
int main(void)
{
const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, message, strlen(message));
return 1;
}
