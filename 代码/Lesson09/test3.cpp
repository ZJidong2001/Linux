/*
通过fork的返回值实现父子进程执行不同任务
*/

#include <iostream>
#include <unistd.h>

int main()
{
    pid_t id = fork();
    if (id == 0)
    {
        // child
        while (true)
        {
            std::cout << "I am child process, pid: " << getpid() << " ppid: " << getppid() << std::endl;
            sleep(1);
        }
    }
    else if (id > 0)
    {
        // parent
        while (true)
        {
            std::cout << "I am parent process, pid: " << getpid() << " ppid: " << getppid() << std::endl;
            sleep(2);
        }
    }
    else
    {
        std::cout << "Create process failed!" << std::endl;
    }
    sleep(1);
    return 0;
}