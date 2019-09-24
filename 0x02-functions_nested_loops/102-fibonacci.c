*#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers.
 *
 * Return: 0 always.
*/
int main(void)
{
unsigned long int x, y, z, t;
z = 0;
y = 1;
for (x = 0; x < 50; x++)
{
t = z + y;
z = y;
y = t;
printf("%lu", t);
if (x != 49)
printf(", ");
}
printf("\n");
return (0);
}
