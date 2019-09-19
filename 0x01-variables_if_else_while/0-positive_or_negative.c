#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Positive Negative
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
printf("%i is positive\n", n);
if (n < 0)
printf("%i is negative\n", n);
if (n == 0)
printf("%i is zero\n", n);
return (0);
}
