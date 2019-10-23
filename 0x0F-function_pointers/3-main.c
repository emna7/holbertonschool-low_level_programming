#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
* main - main calculator
* @argc: num of argument
* @argv: array of argument
* Return: pointer to corresponding function.
*/

int main(int argc, char *argv[])
{
int (*op)(int, int);
int result;
int a;
int b;

if (argc != 4)
{
printf("error\n");
exit(98);
}
op = get_op_func(argv[2]);
a = atoi(argv[1]);
b = atoi(argv[3]);

if (op == NULL)
{
printf("Error\n");
exit(99);
}
result = op(a, b);
printf("%d\n", result);
return (0);
}

