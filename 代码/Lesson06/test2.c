/*
gdb调试程序
*/

#include <stdio.h>

int accumulate(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; ++i)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int num = 100;
    int result = accumulate(num);
    printf("result = %d\n", result);

    return 0;
}