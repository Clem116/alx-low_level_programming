#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c;

    c = 'a';
    while (c <= 'z')
    {
        if (c != 'q')
        {
            putchar(c);
        }
        c++;
    }

    putchar('\n');
    return (0);
}
