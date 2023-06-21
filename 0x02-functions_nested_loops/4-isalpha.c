#include "main.h"
/**
 * _isalpha - Checks if the input is a letter.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a letter, 0 otherwise.
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
int main(void)
{
int result = _isalpha('A');
_putchar(result + '0'); /* Print the result (1 or 0) as a character*/
_putchar('\n');
return (0);
}
