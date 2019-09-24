#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
int res = 0;

for (i = 0; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
res += i;
}
else
continue;
}

printf("%d\n", res);
return (0);
}
