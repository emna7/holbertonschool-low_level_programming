#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char const *argv[])
{
int i;
int j;
int sum = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (argv[i][j] < 48  || argv[i][j] > 57)
{
puts("Error");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
