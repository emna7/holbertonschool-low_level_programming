#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strdup - copy a string
* @str: pointer to string
* Return: pointer
*/
char *_strdup(char *str)
{
unsigned int i, j;
char *p;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
p = malloc(sizeof(char) * i + 1);
if (p == NULL)
return (NULL);
for (j = 0 ; j < i; j++)
p[j] = str[j];
p[j + 1] = '\0';
return (p);
}
