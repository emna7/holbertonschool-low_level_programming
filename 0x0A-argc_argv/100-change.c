#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - print numb of args.
* @argc: number of args
* @argv: the actual arguments
* Return: Void.
*/

int main(int argc, char *argv[])
{
int change;
int pieces = 0;
int coins[5] = {25, 10, 5, 2, 1};
int i = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
change = atoi(argv[1]);
if (change <= 0)
{
printf("0\n");
return (1);
}
while (change != 0)
{
pieces += change / coins[i];
change %= coins[i];
i++;
}
printf("%d\n", pieces);
return (0);
}
