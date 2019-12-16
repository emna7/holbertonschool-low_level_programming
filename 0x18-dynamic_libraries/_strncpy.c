#include "holberton.h"
/**
 * *_strncpy - function that copies a string.
 *@dest : char
 *@src : char
 *@n : int
 * Return: nothing
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
int j;
j = 0;
for (i = 0 ; dest[i] != '\0' ; i++)
{}
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
for (; j < n ; j++)
{
dest[j] = '\0';
}
return (dest);
}
