/*
通过程序创建进程
*/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

//int main()
//{
//    fork();
//    printf("Hello World!\n");
//    sleep(1);
//    return 0;
//}

//int main()
//{
//    int ret = fork();
//    if (ret > 0)
//    {
//        printf("You can see me!\n");
//    }
//    else
//    {
//        printf("Oops! You can see me!\n");
//    }
//    return 0;
//}

int main()
{
    fork();
    while (1)
    {
        printf("I am a process, pid: %d, ppid: %d\n", getpid(), getppid());
        sleep(1);
    }
    return 0;
}