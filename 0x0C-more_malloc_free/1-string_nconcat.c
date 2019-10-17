#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: pointer
 * @s2: pointer
 * @n: unsigned int
 * Return: p
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0;
unsigned int j = 0;
int k = 0;
char *p;
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
if (n > j)
{
p = malloc(i + 1 +j);
n = j;
}
else
{
p = malloc(i + 1 + n);
}
if (p == NULL)
return (NULL);
i = 0;
while (s1[i] != '\0')
{
p[k] = s1[i];
i++;
k++;
}
j = 0;
while (n > j)
{
p[k] = s2[j];
k++;
j++;
}
return (p);
}
