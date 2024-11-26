/*
进程状态之Z
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
            std::cout << "Child is running!" << std::endl;
            sleep(2);
        }
    }
    else if (id > 0)
    {
        // parent do nothing
        std::cout << "Parent do nothing!" << std::endl;
        sleep(50);
    }
    else
    {
        std::cout << "Create process failed!" << std::endl;
    }
    sleep(1);
    return 0;
}