#include"holberton.h"
/**
 * _atoi - function that converts a str to int
 * @s: pointer
 * Return: val
*/
int _atoi(char *s)
{
int c, i, j, m, signe, val;
i = 0;
val = 0;
while (s[i] != '\0')
{
i++;
}
for (c = 0; c < i; c++)
if (s[c] >= '0' && s[c] <= '9')
break;
}
for (j = 0; j < c; j++)
{
if (s[j] == '-')
signe = -1;
}
for (m = c; m < i; m++)
{
if (s[m] < '0' && s[m] > '9')
break;
else if (s[m] >= '0' && s[m] <= '9')
val = val * 10 + (s[m] - '0');
}
val *= signe;
return (val);
}
