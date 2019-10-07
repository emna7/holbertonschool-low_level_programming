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
while (*(s + i) !=  '\0' && *(accept + i) != '\0')
{
if (s[i] == accept[i])
n = n + 1;
i++;
}
return (n);
}
