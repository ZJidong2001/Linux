/*
waitpid参数介绍
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

//int main()  // pid
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
//    //pid_t ret = waitpid(-1, NULL, 0);  // 等待任意一个子进程
//    pid_t ret = waitpid(id, NULL, 0);  // 等待指定pid的子进程
//    if (ret > 0)
//        printf("Father wait %d success\n", ret);
//    else
//        printf("Father wait failed\n");
//
//    sleep(10);
//
//    return 0;
//}

//int main()  // status
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
//        //int ret = 5 / 0;  // 代码异常终止
//        //exit(0);  // 代码运行完毕，结果正确
//        exit(10);  // 代码运行完毕，结果不正确
//    }
//
//    sleep(10);
//
//    printf("Father wait begin!\n");
//    int status = 0;
//    pid_t ret = waitpid(id, &status, 0);  // 输出型参数，获取子进程退出状态（1~7位表示终止信号，9~16位表示退出状态）
//    if (ret > 0)
//        printf("Father wait %d success, status exit signal: %d, status exit code: %d\n", ret, status & 0x7F, (status >> 8) & 0xFF);
//    else
//        printf("Father wait failed\n");
//
//    sleep(10);
//
//    return 0;
//}

int main()  // option
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

    printf("Father wait begin!\n");
    int status = 0;
    while (1)
    {
        pid_t ret = waitpid(id, &status, WNOHANG);  // 非阻塞等待
        if (ret == 0)  // 子进程未退出，需要父进程重复进行等待
        {
            printf("Do father things!\n");
            sleep(1);
        }
        else if (ret > 0)  // 子进程退出，父进程获取退出结果
        {
            printf("Father wait %d success, status exit signal: %d, status exit code: %d\n", ret, status & 0x7F, (status >> 8) & 0xFF);
            break;
        }
        else  // 等待失败
        {
            printf("Father wait failed\n");
            break;
        }
    }

    sleep(10);

    return 0;
}