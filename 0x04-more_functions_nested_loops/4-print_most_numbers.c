#include "holberton.h"
/**
 * print_most_numbers - prints numbers, from 0 to 9 except for 2 and 4
 * @i: variable too print
 * Return 0
*/
void print_most_numbers(int i)
{
int i;
while (i != 2 && i != 4)
{
for (i = '0'; i = '9'; i++)
{
_putchar(i);
_putchar('\n');
}
}
}
