/*
fork创建进程
*/

#include <iostream>
#include <unistd.h>

int main()
{
    fork();
    std::cout << "hello proc: " << getpid() << " hello parent: " << getppid() << std::endl;
    sleep(1);
    return 0;
}