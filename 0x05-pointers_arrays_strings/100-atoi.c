#include"holberton.h"
/**
 * _atoi - function that converts a str to int
 * @s: pointer
 * Return: val
*/
int _atoi(char *s)
{
int i, j, signe, val;
i = 0;
j = 1;
while (s[i] != '\0')
{
if (s[i] == '+')
{
signe = signe * 1;
}
else if (s[i] == '-')
{
signe = signe * -1;
}
else if ((s[i] > '0' && s[i] <= '9'))
{
val = ((j *val) +s[i]);
j = j * 10;
}
else if ((s[i] == '0')
val = val * 10;
j * 10;
}
val = val *signe;
i++;
}
return (val);
}
