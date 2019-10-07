#include"holberton.h"
/**
 * _memcpy - function that copies memory area
 * @dest: pointer
 * @src: pointer
 * @n: number of bytes to fill
 * Return: pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int l = 0;
while (l < n)
{
dest[l] = *src;
l++;
}
return (dest);
}
