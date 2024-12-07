/*
进程退出场景
*/

#include <stdio.h>

//int main()  // 代码运行完毕，结果正确
//{
//    printf("Hello World!\n");
//    return 0;  // 退出码为0
//}

//int main()  // 代码运行完毕，结果不正确
//{
//    printf("Hello World!\n");
//    return 123;  // 退出码为非0
//}

int main()  // 代码异常终止
{
    int ret = 3 / 0;
    printf("Hello World!\n");
    return 0;  // 程序崩溃，退出码无意义
}