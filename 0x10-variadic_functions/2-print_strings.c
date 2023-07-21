#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints string followed by a new line
 * @separator: To be printed between strings
 * @n: Number of strings passed
 * @... Variable number of strings for print
 *
 * Description : If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int p;
va_start(strings, n);
for (p = 0; p < n; p++)
{
str = va_arg(strings, char*);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (p != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}
