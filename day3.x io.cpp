#include <iostream> //头文件，用于调用C++官方方法库
#include "io.h"

int askUser1() //向用户询问第一个数字
{
    std::cout << "输入第一个数字：";
        int x{};
        std::cin >> x;
        return x;
}

int askUser2() //向用户询问第二个数字
{
    std::cout << "输入第二个数字：";
        int x{};
        std::cin >> x;
        return x;
}