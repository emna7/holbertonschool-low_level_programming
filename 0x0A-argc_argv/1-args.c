#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 *@argc: number of arguments
 *@argv: argument vector
 *Return: 0
 */
int main (int argc, char *argv[])
{
int count;
argv[0] = "0";
if (argc > 1)
{
for (count = 1; count < argc; count++)
printf("%d\n", count);
}
else
{
printf("%s\n", argv[0]);
}
return 0;
}
