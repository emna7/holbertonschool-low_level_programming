#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"


/**
 * op_add - function that returns the sum of a and b
 * @a: int
 * @b: int
 * Return: a + b
*/
int op_add(int a, int b)
{
return (a + b);
}


/**
 * op_sub - function that returns the difference of a and b
 * @a: int
 * @b: int
 * Return: a - b
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - function that returns the product of a and b
 * @a: int
 * @b: int
 * Return: a * b
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - function returns the result of the division of a by b
 * @a: int
 * @b: int
 * Return: a / b
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - function that returns the remainder of the division of a by b
 * @a: int
 * @b: int
 * Return: a % b
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
