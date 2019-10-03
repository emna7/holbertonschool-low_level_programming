#include"holberton.h"
/**
 * _strcat - function that concatinates two strings.
 * @dest: pointer
 * @src: pointer
 * Return: 0
*/
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
while (src[i] != '\0')
i++;
j = 0;
while (dest[j] != '\0')
{
*(dest + j) = *(src + i);
i++;
j++;
}
return (dest);
}
