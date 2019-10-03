#include "holberton.h"
/**
* rot13 - rot13 enoding generator *
* @s: char pointer *
* Return: return char *
*/
char *rot13(char *s)
{
int i;
int j;
int n = 0;
char oldalpha[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
char newalpha[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";
i = 0;
j = 0;
while (s[i] != '\0')
{
while (oldalpha[j] != '\0' && n == 0)
{
if (s[i] == oldalpha[j])
{
s[i] = newalpha[j];
n = 1;
}
j++;
}
n = 0;
i++;
}
return (s);
}
