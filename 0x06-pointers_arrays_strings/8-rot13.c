#include "holberton.h"
/**
* rot13 - rot13 enoding generator *
* @s: char pointer *
* Return: return char *
*/
char *rot13(char *s)
{
int i, j;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; *(s + i); i++)
{
for (j = 0; j < 52; j++)
{
if (a[j] == *(s + i))
{
*(s + i) = b[j];
break;
}
}
}
return (s);
}
