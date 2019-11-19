#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#define COUNT 5
int main()
{
pid_t pid[COUNT];
int i, status;
char *argv[] = {"ls", NULL};
char *env[] = {"/tmp", NULL};
printf("pid parent is %u\n", getpid());
for (i = 0; i < COUNT; ++i)
{
status = 0;
pid[i] = fork();
if (pid[i] == 0)
{
printf("pid %d : %u is finished with ret value %d and his parent is: %u\n", i + 1, getpid(), pid[i], getppid());
execve("/bin/ls", argv, env);
exit(i);
WEXITSTATUS(status);
}
}
return 0;
}
