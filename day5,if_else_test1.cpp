#include <iostream>

int askUesr() //询问用户，获得整数
{
    std::cout << "输入一个整数：" ;
    int x{};
    std::cin >> x ;

    return x ;
}

void compare() //调用询问函数，用返回的值进行判断
{
    int x {askUesr()};

    if (x > 0)
    {
        std::cout << "\n这个数是正数" ;
    }
    
    else if (x == 0)
    {
        std::cout << "\n这个数是 0" ;
    }

    else
    {
        std::cout << "\n这个数是负数";
    }

}

int main() //程序开始运行
{
    compare() ;

    return 0;
}