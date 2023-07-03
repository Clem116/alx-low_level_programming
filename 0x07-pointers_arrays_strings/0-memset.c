#include <stdio.h>
#include <string.h>
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */
int main(void)
{
char str[20] = "Hello, world!";
printf("Before memset: %s\n", str);
memset(str, 'X', 5);
printf("After memset: %s\n", str);
memset(str, 'Y', 5);
printf("After memset: %s\n", str);
return (0);
}
