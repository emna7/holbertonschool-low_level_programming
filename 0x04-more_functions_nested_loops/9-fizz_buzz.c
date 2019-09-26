#include <stdio.h>
/**
 * main - Fizz-Buzz program
 *
 * Return: 0 always
*/
int main(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if ((x % 3 == 0) && (x % 5 == 0))
printf("Fizzbuzz");
else if (x % 3 == 0)
printf("Fizz");
else if (x % 5 == 0)
printf("Buzz");
else
printf("%i", x);
if (x != 100)
printf(" ");
}
printf('\n');
return (0);
}
