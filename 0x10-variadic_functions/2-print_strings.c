#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings separated by separator
 * @separator: string to separate with
 * @n: number of variable arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list list;
va_start(list, n);
for (i = 0; i < (n - 1); i++)
{
str = va_arg(list, char*);
if (separator != NULL)
{
if (str == NULL)
printf("(nil)%s", separator);
else
printf("%s%s", str, separator);
}
else
{
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}
}
i++;
printf("%s\n", va_arg(list, char *));
va_end(list);
}
