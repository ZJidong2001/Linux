/*
命令行执行指令，继承父进程bash的所有数据，从而全局变量具有全局属性
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//int main()
//{
//    printf("I am a process, pid: %d, ppid: %d\n", getpid(), getppid());
//    return 0;
//}

int main()
{
    printf("my env string: %s\n", getenv("my_env_string"));
    return 0;
}