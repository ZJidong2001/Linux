/*
exec*执行进程替换
*/

#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("I am a process, pid: %d\n", getpid());

    //execl("/usr/bin/ls", "ls", "-l", "-a", "-n", NULL);  // 进程替换成功，就不会执行后续代码，意味着exec*函数成功时不需要返回值检测
    execl("/usr/bin/lssss", "ls", "-l", "-a", "-n", NULL);  // 只要exec*返回，就一定是因为调用失败

    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("Hello World!\n");

    return 0;
}