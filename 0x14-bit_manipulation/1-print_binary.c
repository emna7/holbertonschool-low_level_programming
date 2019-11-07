#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - function that converts numbers to binary
 * @n: number to convert
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
int k, i;
if (n < 2)
{
_putchar(n + '0');
}
else
{
for (i = 31; i >= 0; i--)
{
k = n >> i;
if (k != 0)
{
if (k & 1)
_putchar('1');
else
_putchar('0');
}
}
}
}
