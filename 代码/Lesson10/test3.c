/*
命令行参数，控制命令的执行行为
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

//int main(int argc, char* argv[])
//{
//    for (int i = 0; i < argc; i++)
//    {
//        printf("argv[%d] -> %s\n", i, argv[i]);
//    }
//    return 0;
//}

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s -[n|b]\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "-n") == 0)
    {
        printf("Wang Shuling\n");
    }
    else if (strcmp(argv[1], "-b") == 0)
    {
        printf("2001-10-08\n");
    }
    else
    {
        printf("I love you!\n");
    }

    return 0;
}