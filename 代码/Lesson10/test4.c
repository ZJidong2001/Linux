/*
程序获取环境变量的三种方式
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//int main(int argc, char* argv[], char* env[])
//{
//
//    for (int i = 0; env[i]; i++)
//    {
//        printf("%d -> %s\n", i, env[i]);
//    }
//    return 0;
//}

//int main()
//{
//    extern char** environ;
//    for (int i = 0; environ[i]; i++)
//    {
//        printf("%d -> %s\n", i, environ[i]);
//    }
//    return 0;
//}

int main()
{
    printf("PATH: %s\n", getenv("PATH"));
    printf("HOME: %s\n", getenv("HOME"));
    printf("SHELL: %s\n", getenv("SHELL"));
    return 0;
}