#include"holberton.h"
/**
 * reverse_array - function that reverses an array of integers
 * @a: pointer
 * @n: number of elements
*/
void reverse_array(int *a, int n)
{
int i, j, m;
if (n % 2 != 0)
j = n + 1;
else
j = n;
for (i = 0; i < j / 2; i++)
{
m = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = m;
}
}
