#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings followed by a new line.
 * @separator: string.
 * @n: number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
unsigned int i;
if (n != 0)
va_start(strings, n);
for (i = 0; i < n; i++)
{
char *s = va_arg(strings, char *);
if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}
if (separator != NULL && i != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}
