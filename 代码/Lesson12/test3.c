/*
main函数与非main函数的return
*/

#include <stdio.h>

int func()
{
    printf("Are you ok?\n");
    return 123;  // 代表函数返回
}

int main()
{
    func();
    printf("Hello World!\n");
    return 0;  // 代表进程退出
}