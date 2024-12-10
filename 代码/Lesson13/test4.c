/*
C文件接口
*/

#include <stdio.h>

//int main()
//{
//    FILE* fp = fopen("./log.txt", "w");
//    if (NULL == fp)
//    {
//        perror("fopen");
//        return 1;
//    }
//
//    const char* msg = "Hello World!\n";
//    int cnt = 10;
//    while (cnt--)
//        fputs(msg, fp);
//
//    fclose(fp);
//
//    return 0;
//}

//int main()
//{
//    FILE* fp = fopen("./log.txt", "r");
//    if (NULL == fp)
//    {
//        perror("fopen");
//        return 1;
//    }
//
//    char buffer[64];
//    while (fgets(buffer, sizeof(buffer), fp))
//        printf("%s", buffer);
//    if (!feof(fp))
//        printf("fgets quits abnormal!\n");
//    else
//        printf("fgets quits normal!\n");
//
//    fclose(fp);
//
//    return 0;
//}

int main()
{
    FILE* fp = fopen("./log.txt", "a");
    if (NULL == fp)
    {
        perror("fopen");
        return 1;
    }

    const char* msg = "Hello World!\n";
    int cnt = 10;
    while (cnt--)
        fputs(msg, fp);

    fclose(fp);

    return 0;
}