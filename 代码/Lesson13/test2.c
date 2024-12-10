/*
C程序通过程序替换执行其他编程语言代码
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    if (fork() == 0)
    {
        printf("command begin...\n");
        execl("/usr/bin/python3", "python", "test2_python.py", NULL);
        printf("command end...\n");
        exit(1);
    }

    waitpid(-1, NULL, 0);
    printf("wait child success!\n");

    return 0;
}