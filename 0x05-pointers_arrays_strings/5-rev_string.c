#include "holberton.h"
/**
* rev_string - reverse a string
* @s: string to reverse
* Return: 0
*/
void rev_string(char *s)
{
int i, x;
char c;
while (*(s + i) != '\0')
{
i++;
}
for (x = 0; x < i; x++)
{
c = *(s + i);
*(s + i) = *(s + x);
*(s + x) = c;
i--;
}
}
