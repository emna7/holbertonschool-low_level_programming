#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
char str[80];
const char s[1] = " ";
char *buff;
buff = malloc(sizeof(char));
buff = strtok(str, s);
while(buff != NULL)
{
printf("%s\n", buff);
buff = strtok(NULL, s);
}
return(0);
}
