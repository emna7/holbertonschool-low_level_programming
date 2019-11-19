#include <unistd.h>
#include <stdio.h>
void main(int ac, char **av, char **env)
{
int i;
extern char *environ;
for (i = 0; i < ac; i++)
printf("%p\n", env);
printf("%p\n", environ);
}
