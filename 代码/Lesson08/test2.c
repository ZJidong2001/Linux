/*
进程标识符
*/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    while (1)
    {
        printf("Hello, pid: %d, ppid: %d\n", getpid(), getppid());
        sleep(1);
    }
    return 0;
}