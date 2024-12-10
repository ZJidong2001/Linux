/*
open接口介绍
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
    //int fd = open("./log.txt", O_WRONLY | O_CREAT);  // 生成文件的权限为随机权限
    int fd = open("./log.txt", O_WRONLY | O_CREAT, 0644);
    if (fd < 0)
        printf("open error\n");

    close(fd);
    
    return 0;
}