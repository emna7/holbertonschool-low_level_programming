#include"holberton.h"
/**
 * print_diagsums - prints sums of both diagonals of square matrix
 * @size: size of square
 * @a: pointer to int array
 * Return: void
*/
void print_diagsums(int *a, int size)
{
int i = 0, j = 0, sum = 0, sum2 = 0;
while (i = j)
{
sum += a[i][j];
i++;
j++;
}
j = 0;
do
{
sum2 += a[i][j];
i--;
j++;
} while ( i != 0);
printf("%d, %d\n", sum, sum2);
}
