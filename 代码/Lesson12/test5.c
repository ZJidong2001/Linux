/*
进程等待wait与waitpid
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

//int main()
//{
//    pid_t id = fork();
//    if (id == 0)
//    {
//        int cnt = 5;
//        while (cnt)
//        {
//            printf("Child[%d] is running, cnt is %d\n", getpid(), cnt);
//            cnt--;
//            sleep(1);
//        }
//        exit(0);
//    }
//
//    sleep(10);
//
//    printf("Father wait begin!\n");
//    pid_t ret = wait(NULL);
//    if (ret > 0)
//    {
//        printf("Father wait %d success\n", ret);
//    }
//    else
//    {
//        printf("Father wait failed\n");
//    }
//
//    sleep(10);
//
//    return 0;
//}

int main()
{
    pid_t id = fork();
    if (id == 0)
    {
        int cnt = 5;
        while (cnt)
        {
            printf("Child[%d] is running, cnt is %d\n", getpid(), cnt);
            cnt--;
            sleep(1);
        }
        exit(0);
    }

    sleep(10);

    printf("Father wait begin!\n");
    pid_t ret = waitpid(-1, NULL, 0);
    if (ret > 0)
        printf("Father wait %d success\n", ret);
    else
        printf("Father wait failed\n");

    sleep(10);

    return 0;
}