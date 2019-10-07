#include"holberton.h"
/**
 * _strspn - Counts bytes from accept in the prefix substring of s
 * @s: pointer
 * @accept: pointer
 * Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int i = 0;
int j = 0;
while (*(s + i) !=  '\0')
{
while (*(accept + j) != '\0')
{
if (s[0] != accept[0])
return (n);
else if (s[i] == accept[j])
{
n++;
}
j++;
}
i++
}
return (n);
}
