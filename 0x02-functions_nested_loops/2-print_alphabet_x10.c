#include"holberton.h"
/**
 * print_alphabet_x10 - prints a-z 10 times followed by a
 * new line each time
 */

void print_alphabet_x10(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
}
