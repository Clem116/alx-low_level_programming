#include "main.h"
 /**
 * main - Entry point
 * print_alphabet_x10 - prints 10 x alphabet in lowercase followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char ch;
int i;
i = 0;
while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
{
_putchar(ch);
ch++;
}
_puthar('\n');
i++;
}
}
