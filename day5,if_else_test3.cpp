#include <iostream>

int askUser() //询问用户分数
{
    int x{} ;
    std::cout << "输入你的分数：" ;
    std::cin >> x ;

    return x ;
}

void compare() //调取函数，判断成绩评级
{
    int a{askUser()};

    if (a > 100)
    {
        std::cout << "成绩不正确，重新输入" ;
    }
    
    else if (a >= 90)
    {
        std::cout << "你的评价是 A" ;
    }

    else if (a >= 80)
    {
        std::cout << "你的评价是 B" ;
    }
    
    else if (a >= 70)
    {
        std::cout << "你的评价是 C" ;
    }

    else if (a >= 60)
    {
        std::cout << "你的评价是 D" ;
    }

    else if (a >= 0)
    {
        std::cout << "你的评价是 F" ;
    }

    else 
    {
        std::cout << "成绩不正确，重新输入" ;
    }
}

int main() //程序开始，调用函数
{
    compare();

    return 0 ;
}