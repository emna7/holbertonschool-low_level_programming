#include"holberton.h"
/**
 * _atoi - function that converts a str to int
 * @s: pointer
 * return: val
*/
int _atoi(char *s)
{
int i, j, signe, val;
i = 0; j = 1;
while(*(s + i) != '\0')
{
if (*(s + i) == '+')
{
signe = 1;
}
else if (*(s + i) == '-')
{
signe = -1;
}
else if (*(s + i) == 0..9)
{
val = (j * val) + val;
j = j * 10;
}
}
val = val * signe;
return (val);
}
