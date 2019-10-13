#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char const *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
