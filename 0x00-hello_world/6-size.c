#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of short: %lu byte(s)\n", (unsigned long)sizeof(short));
printf("Size of long: %lu byte(s)\n", (unsigned long)sizeof(long));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(float));
printf("Size of double: %lu byte(s)\n", (unsigned long)sizeof(double));
printf("Size of long double: %lu byte(s)\n", (unsigned long)sizeof(double));
return (0);
}
