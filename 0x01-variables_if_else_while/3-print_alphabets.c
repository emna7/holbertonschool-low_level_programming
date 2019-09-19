#include <stdio.h>
/**
 * main - Entry point
 * print_alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
char cc;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (cc = 'A'; cc <= 'Z'; cc++)
putchar(cc);
putchar('\n');
return (0);
}
