/*
fflush刷新缓冲区
*/

#include <stdio.h>
#include <unistd.h>

//int main()
//{
//    printf("Hello\n");
//    return 0;
//}

//int main()
//{
//    printf("Hello\n");
//    sleep(5);
//    return 0;
//}

//int main()
//{
//    printf("Hello");
//    sleep(5);
//    return 0;
//}

//int main()
//{
//    printf("Hello");
//    fflush(stdout);
//    sleep(5);
//    return 0;
//}

//int main()
//{
//    int count = 5;
//    while (count)
//    {
//        printf("%d\n", count);
//        count--;
//        sleep(1);
//    }
//    return 0;
//}

//int main()
//{
//    int count = 5;
//    while (count)
//    {
//        printf("%d\r", count);
//        count--;
//        sleep(1);
//    }
//    return 0;
//}

//int main()
//{
//    int count = 5;
//    while (count)
//    {
//        printf("%d\r", count);
//        fflush(stdout);
//        count--;
//        sleep(1);
//    }
//    return 0;
//}

//int main()
//{
//    int count = 10;
//    while (count)
//    {
//        printf("%d\r", count);
//        fflush(stdout);
//        count--;
//        sleep(1);
//    }
//    return 0;
//}

int main()
{
    int count = 10;
    while (count)
    {
        printf("%2d\r", count);
        fflush(stdout);
        count--;
        sleep(1);
    }
    return 0;
}