/*
修改环境变量PATH，提供可执行文件的路径
*/

#include <stdio.h>
#include <unistd.h>

int main()
{
    int cnt = 5;
    while (cnt)
    {
        printf("I am a cmd -> process!\n");
        sleep(1);
        --cnt;
    }
    return 0;
}