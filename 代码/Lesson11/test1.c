/*
只读数据，操作系统只维护一份，成本最低
*/

#include <stdio.h>

int main()
{
    const char* str1 = "Hello World!";
    const char* str2 = "Hello World!";
    printf("%p\n", str1);
    printf("%p\n", str2);

    return 0;
}