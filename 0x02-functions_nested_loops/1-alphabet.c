#include "main.h"
 /**
 * main - Entry point
 * Description: Prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet();
return (0);
}
/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
