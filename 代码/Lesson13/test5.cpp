/*
C++文件接口
*/

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ofstream out("./log.txt", std::ios::out | std::ios::binary);
    if (!out.is_open())
    {
        std::cerr << "open error" << std::endl;
        return 1;
    }

    std::string msg = "Hello World!\n";
    int cnt = 5;
    while (cnt--)
        out.write(msg.c_str(), msg.size());

    out.close();

    return 0;
}