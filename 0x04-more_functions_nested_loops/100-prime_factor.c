#include <stdio.h>
/**
 * main - function that prints the prime factor of a number
 *
 * return: 0 Always
*/
int main(void)
{
long d, largest_num;
long number;

number = 612852475143;
for (d = 2; d < sqrt(number); d++)
{
if ((number % d) == 0)
{
largest_num = d;
number = number / d;
d = 1;
}
}
largest_num = number;
printf("%ld\n", largest_num);
return (0);

}
