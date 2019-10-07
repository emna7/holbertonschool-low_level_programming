#include"holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints sums of both diagonals of square matrix
 * @size: size of square
 * @a: pointer to int array
*/
void print_diagsums(int *a, int size)
{
int i;
int sum = 0, sum1 = 0;
i = 0;
while (i < (size * size))
{
sum += *(a + i);
i += size + 1;
}
i = 0;
while (i < ((size * size) - 1))
{
sum1 += *(a + i);
i += size - 1;
}
printf("%d, %d\n", sum, sum1);
}
