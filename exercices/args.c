#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: argument vector
*/
int main(int argc, char *argv[])
{
int i;
(void)argc;
for (i = 0; argv[i] != '\0'; i++)
printf("%s ", argv[i]);
return (0);
}
