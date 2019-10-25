#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @separator: pointer
 * @n: number of parameters
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list valist;
va_start(valist, n);
for (i = 0; i < (n - 1); i++)
printf("%d%s", va_arg(valist, int), separator);
i++;
printf("%d\n", va_arg(valist, int));
va_end(valist);
}
