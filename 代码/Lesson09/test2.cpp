/*
fork的返回值
*/

#include <iostream>
#include <unistd.h>

int main()
{
    pid_t id = fork();
    std::cout << "hello proc: " << getpid() << " hello parent: " << getppid() << " ret: " << id << std::endl;
    sleep(1);
    return 0;
}