#include"holberton.h"
/**
 *_strcpy - function that copies string
 *@dest: pointer
 *@src: pointer
 * Return: *dest
*/
char *_strcpy(char *dest, char *src)
{
int i;
i = 0;
while (*(src + i) != '\0')
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = *(src + i);
return (dest);
}
