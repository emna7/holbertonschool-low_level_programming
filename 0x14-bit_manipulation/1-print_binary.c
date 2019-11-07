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
int i;
int k;
i = 32;
while (i >= 0)
{
k = n >> i;
if (k & 1)
_putchar ('1');
else
_putchar ('0');
i--;
}
}
