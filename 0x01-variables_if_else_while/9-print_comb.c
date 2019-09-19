#include<stdio.h>
/**
 * main - Entry point
 * print_single digit numbers
 * return 0 (success)
*/
int main(void)
{
int i;
for (i = 48 ; i <= 57; i++)
{
putchar(i);
if ( i < 57 )
{
putchar(44);
putchar(32);
}
}
return(0);
}
