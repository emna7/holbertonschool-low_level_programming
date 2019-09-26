#include "holberton.h"
/**
 * print_diagonal - function that prints a diagonal line
 * @n: the number of times the character \ should be printed
 * Return 0
*/
void print_diagonal(int n)
{
int count, count_2;

for (count = 0; count < n; count++)
{
for (count_2 = 0; count_2 <= count; count_2++)
{
if (count_2 != count)
{
_putchar(' ');
}
else
{
_putchar('\\');
}

}
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}
