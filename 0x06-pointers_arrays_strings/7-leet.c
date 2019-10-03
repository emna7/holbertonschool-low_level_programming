#include"holberton.h"
/**
 * leet - function that encodes a string into 1337
 * @s: pointer
 * Return: s
*/
char *leet(char *s)
{
int i = 0, j = 0;
char t[] = {'A', 'a', 'e', 'E', 't', 'T', 'O', 'o', 'L', 'l'};
char t2[] = {'4', '4', '3', '3', '7', '7', '0', '0', '1', '1'};
while (s[i] != '\0')
{
for (j = 0; j < 10; j++)
if (s[i] == t[j])
{
s[i] = t2[j];
}
i++;
}
return (s);
}
