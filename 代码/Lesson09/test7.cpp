/*
孤儿进程
*/

#include <iostream>
#include <unistd.h>
#include <cstdlib>

int main()
{
    pid_t id = fork();
    if (id == 0)
    {
        // child
        while (true)
        {
            std::cout << "Child is running!" << std::endl;
            sleep(2);
        }
    }
    else if (id > 0)
    {
        // parent do nothing
        std::cout << "Parent do nothing!" << std::endl;
        sleep(10);
        exit(1);
    }
    else
    {
        std::cout << "Create process failed!" << std::endl;
    }
    sleep(1);
    return 0;
}