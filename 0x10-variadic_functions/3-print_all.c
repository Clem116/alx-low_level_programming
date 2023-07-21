#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints everything
 * @format: list typesof arguments passed
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *str, *sep = "";
va_list any;
va_start (any, format);
if (format)
{
while (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(any, int));
break;
case 'i':
printf("%s%d", sep, va_arg(any, int));
break;
case 'f':
printf("%s%f", sep, va_arg(any, double));
break;
case 's':
str = va_arg(any, char*);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
i++;
continue;
}
sep = ",";
i++;
}
}
printf("\n");
va_end(any);
}
