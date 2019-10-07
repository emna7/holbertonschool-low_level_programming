#include"holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints sums of both diagonals of square matrix
 * @size: size of square
 * @a: pointer to int array
 * Return: void
*/
void print_diagsums(int *a, int size)
{
int i;
int j;
int x;
i = 0;
j = 0;
x = size * size;
while (i < x)
{
if (i % (size + 1) == 0)
j += a[i];
i++;
}
printf("%d, ", j);
j = 0;
i = 0;
while (i < x)
{
if (i % (size - 1) == 0 && i != (j - 1) && i != 0)
j += a[i];
i++;
}
printf("%d\n", j);
}
