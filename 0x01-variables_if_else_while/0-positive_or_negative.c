#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n==0)
        {
        printf("%d is zero", n);
        }
        else if (n>0)
        {
        printf("%d is a positive number \n", number);
        else
        {
        printf(("%d is a negative number \n", number);
        }
	return (0);
}
