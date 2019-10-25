#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that sums all its parameters
 * @n: number of parameters
 * Return: 0 if n = 0 number of parameters otherwise
*/

int sum_them_all(const unsigned int n, ...)
{
va_list lis;
unsigned int i = 0;
int sum;
if (n == 0)
return (0);
va_start(lis, n);
for (i = 0; i < n; i++)
sum += va_arg(lis, unsigned int);
va_end(lis);
return (sum);
}
