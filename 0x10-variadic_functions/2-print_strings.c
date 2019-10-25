#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings
 * @separator: pointer
 * @n: number of parameters
 * Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list valist;
va_start(valist, n);
for (i = 0; i < (n - 1); i++)
printf("%s%s", va_arg(valist, int), separator);
i++;
printf("%d\n", va_arg(valist, int));
if (va_arg(valist, char *) == NULL)
printf("(nil)");
va_end(valist);
}

