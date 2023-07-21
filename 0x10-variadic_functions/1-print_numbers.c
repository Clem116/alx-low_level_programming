#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed be new line
 * separator: String to be printed btn numbers
 * @n: Number of numbers to be printed
 * ...: Variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int count;
va_start (nums, n);
for (count = 0; count < n; count++)
{
printf("%d", va_arg(nums, int));
if(count != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(nums);
}
