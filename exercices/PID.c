#include <stdio.h>
#include <unistd.h>
int main()
{
pid_t p_pid;
p_pid=getpid();
printf("Parent Process ID: %d\n",p_pid);
return 0;
}
