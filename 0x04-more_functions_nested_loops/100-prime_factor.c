#include <stdio.h>
/**
 * main - function that prints the prime factor of a number
 *
 * return: 0 Always
*/
int main(void)
{
long n; i;
i = 2;
n = 612852475143
for (i = 2; i <= n; i++)
{
if (n % i == 0)
{
while (n % i == 0)
n = n / i;
}
}
printf("%ld\n", i - 1);
return (0);
}
