/*
进程常见退出方法（正常退出）：return、exit、_exit
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//int main()
//{
//    printf("Hello World!");
//    sleep(4);
//    //return 0;  // 结果正确
//    return 123;  // 结果不正确
//}

//int main()
//{
//    printf("Hello World!");
//    sleep(4);
//    //exit(0);  // 结果正确
//    //exit(EXIT_SUCCESS);  // 结果正确
//    //exit(123);  // 结果不正确
//    exit(EXIT_FAILURE);  // 结果不正确
//}

int main()
{
    printf("Hello World!");
    sleep(4);
    //_exit(0);  // 结果正确
    //_exit(EXIT_SUCCESS);  // 结果正确
    //_exit(123);  // 结果不正确
    _exit(EXIT_FAILURE);  // 结果不正确
}