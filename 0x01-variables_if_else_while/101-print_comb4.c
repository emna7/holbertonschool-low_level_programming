#include <stdio.h>
/**
 * main - Entry point
 * print_alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int m;
int t;
for (n = 48; n <= 57; n++)
for (m = 48; m <= 57; m++)
for (t = 48; t <= 57; t++)
if (n < m)
if (m < t)
{
putchar(n);
putchar(m);
putchar(t);
if (n != 55 || m != 56 || t != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
