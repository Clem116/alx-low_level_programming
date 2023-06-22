#include "main.h"
/**
 * main - Entry point
 * Description: Calls the print_alphabet_x10 function.
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet_x10();
return (0);
}
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 */
void print_alphabet_x10(void)
{
char ch;
int i;
for (i = 0; i < 10; i++)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
