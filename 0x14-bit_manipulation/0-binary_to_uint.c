#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - function that converts a binary to an unsigned int
 * @b: pointer
 * Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
int i = 0, l = 0, j, sum = 0;
int pow = 1;
if (b == NULL)
return (0);
while (b[i] != '\0')
{
l++;
}
i = 0;
while (b[i] != '\0')
{
if (b[i] == '1')
{
for (j = 0; j < l; j++)
{
pow = pow * 2;
}
sum+= pow;
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
