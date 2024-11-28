/*
C/C++程序地址空间验证
*/

#include <stdio.h>
#include <stdlib.h>

int g_unval;
int g_val = 100;

int main()
{
    const char* str = "hello world";
    char* heap1 = (char*)malloc(10);
    char* heap2 = (char*)malloc(10);
    char* heap3 = (char*)malloc(10);
    char* heap4 = (char*)malloc(10);
    int a = 10;

    printf("code addr: %p\n", main);  // 代码区
    printf("string rdonly addr: %p\n", str);  // 字符常量区
    printf("init addr: %p\n", &g_val);  // 已初始化全局数据区
    printf("uninit addr: %p\n", &g_unval);  // 未初始化全局数据区
    printf("heap addr: %p\n", heap1);  // 堆区
    printf("heap addr: %p\n", heap2);  // 堆区
    printf("heap addr: %p\n", heap3);  // 堆区
    printf("heap addr: %p\n", heap4);  // 堆区
    printf("stack addr: %p\n", &str);  // 栈区
    printf("stack addr: %p\n", &heap1);  // 栈区
    printf("stack addr: %p\n", &heap2);  // 栈区
    printf("stack addr: %p\n", &heap3);  // 栈区
    printf("stack addr: %p\n", &heap4);  // 栈区
    printf("stack addr: %p\n", &a);  // 栈区

    return 0;
}