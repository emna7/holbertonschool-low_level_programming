#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - function that converts a binary to an unsigned int
 * @b: pointer
 * Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
int i = 0, l = 0, sum = 0;
int po;
if (b == NULL)
return (0);
while (b[i] != '\0')
{
l++;
i++;
}
i = 0;
while (b[i] != '\0')
{
if (b[i] == '1')
{
po = power(2, l);
sum+= po;
i++;
l--;
return (sum);
}
else if (b[i] == '0')
{
i++;
l--;
}
else
return (0);
}
return (sum);
}
/**
*
*
*
*/
int power(int base, int pow)
{
int exp, result;
if(pow == 0)
return 1;
for (exp = pow; exp > 0; exp--)
{
result = result * base;
}
return (result);
}
