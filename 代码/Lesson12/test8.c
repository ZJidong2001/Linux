/*
exec*执行进程替换
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    if (fork() == 0)
    {
        execl("/usr/bin/ls", "ls", "-a", "-l", "-n", "-i", NULL);

        printf("hahahaha\n");  // 后续代码均不会被执行
        printf("hahahaha\n");  // 后续代码均不会被执行
        printf("hahahaha\n");  // 后续代码均不会被执行
        printf("hahahaha\n");  // 后续代码均不会被执行
        exit(123);  // 后续代码均不会被执行
    }

    waitpid(-1, NULL, 0);
    printf("wait success!\n");

    return 0;
}