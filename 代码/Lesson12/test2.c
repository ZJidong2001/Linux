/*
查看不同退出码对应的含义
*/

#include <stdio.h>
#include <string.h>

int main()
{
    for (int i = 0; i < 140; i++)
    {
        printf("%d: %s\n", i, strerror(i));
    }
    return 0;
}