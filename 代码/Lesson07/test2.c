/*
进度条小程序
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
#define NUM 100
    char bar[NUM + 1];
    memset(bar, '\0', sizeof(bar));
    const char* label = "|/-\\";

    int i = 0;
    while (i <= 100)
    {
        printf("[%-100s][%3d%%][%c]\r", bar, i, label[i % 4]);
        fflush(stdout);
        bar[i] = '#';
        ++i;
        usleep(50000);
    }
    printf("\n");

    return 0;
}