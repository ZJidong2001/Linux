/*
进程使用的是虚拟地址，不是物理地址
*/

#include <stdio.h>
#include <unistd.h>

int main()
{
    if (fork() == 0)
    {
        // child
        int cnt = 5;
        while (cnt)
        {
            printf("I am child proc, g_val = %d, &g_val = %p\n", g_val, &g_val);
            cnt--;
            sleep(1);
            if (cnt == 3)
            {
                g_val = 200;
                printf("#####  child proc 更改数据  #####\n");
            }
        }
    }
    else
    {
        // parent
        while (1)
        {
            printf("I am parent proc, g_val = %d, &g_val = %p\n", g_val, &g_val);
            sleep(1);
        }
    }
    return 0;
}