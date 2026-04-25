#include <iostream>

int askUser1() //询问用户第一个数字
{
    int x;
    std::cout << "输入第一个数字：";
    std::cin >> x ;

    return x ;
}

int askUser2() //询问用户第二个数字
{
    int y;
    std::cout << "输入第二个数字：";
    std::cin >> y ;

    return y ;
}

void compare() //调用函数获取两个数字并比较大小
{
    int x{askUser1()} , y{askUser2()} ; 

    if (x > y)
    {
        std::cout << "\n数字 " << x << " 更大\n" ;
    }

    else if (x < y)
    {
        std::cout << "\n数字 " << y << " 更大\n" ;
    }

    else
    {
        std::cout << "\n两个数字一样大\n";
    }
}

int main() //启动程序，调用函数
{
    compare();

    return 0;
}