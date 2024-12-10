/*
进程替换exec*系列函数
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

//int main()  // execl
//{
//    if (fork() == 0)
//    {
//        printf("command begin...\n");
//        execl("/usr/bin/ls", "ls", "-a", "-l", "-i", NULL);
//        printf("command end...\n");
//        exit(1);
//    }
//
//    waitpid(-1, NULL, 0);
//    printf("wait child success!\n");
//
//    return 0;
//}

//int main()  // execv
//{
//    if (fork() == 0)
//    {
//        printf("command begin...\n");
//        char* argv[] =
//        {
//            "ls",
//            "-a",
//            "-l",
//            "-i",
//            NULL
//        };
//        execv("/usr/bin/ls", argv);
//        printf("command end...\n");
//        exit(1);
//    }
//
//    waitpid(-1, NULL, 0);
//    printf("wait child success!\n");
//
//    return 0;
//}

//int main()  // execlp
//{
//    if (fork() == 0)
//    {
//        printf("command begin...\n");
//        execlp("ls", "ls", "-a", "-l", "-i", NULL);
//        printf("command end...\n");
//        exit(1);
//    }
//
//    waitpid(-1, NULL, 0);
//    printf("wait child success!\n");
//
//    return 0;
//}

//int main()  // execvp
//{
//    if (fork() == 0)
//    {
//        printf("command begin...\n");
//        char* argv[] =
//        {
//            "ls",
//            "-a",
//            "-l",
//            "-i",
//            NULL
//        };
//        execvp("ls", argv);
//        printf("command end...\n");
//        exit(1);
//    }
//
//    waitpid(-1, NULL, 0);
//    printf("wait child success!\n");
//
//    return 0;
//}

//int main()  // execle
//{
//    if (fork() == 0)
//    {
//        printf("command begin...\n");
//        char* env[] =
//        {
//            "MYENV1=wangshuling",
//            "MYENV2=20011008",
//            "MYENV3=AllMyLoveIsGone",
//            NULL
//        };
//        execle("./test1_load", "test1_load", NULL, env);
//        printf("command end...\n");
//        exit(1);
//    }
//
//    waitpid(-1, NULL, 0);
//    printf("wait child success!\n");
//
//    return 0;
//}

int main()  // execve
{
    if (fork() == 0)
    {
        printf("command begin...\n");
        char* argv[] =
        {
            "test1_load",
            NULL
        };
        char* env[] =
        {
            "MYENV1=wangshuling",
            "MYENV2=20011008",
            "MYENV3=AllMyLoveIsGone",
            NULL
        };
        execve("./test1_load", argv, env);
        printf("command end...\n");
        exit(1);
    }

    waitpid(-1, NULL, 0);
    printf("wait child success!\n");

    return 0;
}