#include<stdio.h>
/**
 * main - Entry point
 * print_from 00 to 99
 * Return: Always 0 (Success)
*/
int main(void)
{
int i;
int j;
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
		putchar(i);
		putchar(j);
		putchar(',');
		putchar(' ');
		}
	}
putchar('\n');
return (0);
}
