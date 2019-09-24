#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the largest of 3 integers
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

a = 972;
b = -98;
c = 0;
if (a > b && b > c)
largest = a
else if (b > a && b > c)
largest = b;
else if (a == b)
largest = a;
else
largest = c;

return (largest);
}
