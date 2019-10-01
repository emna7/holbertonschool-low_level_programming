#include"holberton.h"
#include <stdio.h>
/**
 * print_array - function that prints elements of an array of integers
 * @a: integer
 * @n: int type integer
*/
void print_array(int *a, int n)
{
int i;
for (i = 0 ; i < n; i++)
{
printf("%d", *(a + i));
if (i != n - 1)
printf(", ");
}
printf("\n");
}
