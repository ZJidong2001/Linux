/*
C程序默认打开三个输入输出流：stdin、stdout、stderr
*/

#include <stdio.h>

//int main()
//{
//    const char* msg = "You can see me!\n";
//    fputs(msg, stdout);  // 仅执行程序将输出到显示屏，若重定向则输出到指定文件（如./a.out > log.txt）
//    return 0;
//}

int main()
{
    const char* msg = "You can see me!\n";
    fputs(msg, stderr);  // 仅执行程序将输出到显示屏，由于>是输出重定向，stderr无法输出到指定文件
    return 0;
}