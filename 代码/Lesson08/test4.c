/*
进程cwd
*/

#include <stdio.h>

int main()
{
    FILE* file = fopen("log.txt", "w");
    fclose(file);
    return 0;
}