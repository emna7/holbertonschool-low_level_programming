#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of a prog
 * @ac: int
 * @av: char
 * Return: char
*/
char *argstostr(int ac, char **av)
{
char *c;
int i, j, k = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
k++;
}
c = malloc(sizeof(char) * k + 1 + ac);
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
c[k] = av[i][j];
k++;
}
c[k] = '\n';
k++;
}
return (c);
}
