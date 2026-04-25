#include <iostream>

double askUser1() //询问用户第一个数字
{
    double x {} ;
    std::cout << "输入第一个数字：" ;
    std::cin >> x ;

    return x ;
}

double askUser2() //询问用户第二个数字
{
    double y {} ;
    std::cout << "输入第二个数字：" ;
    std::cin >> y ;

    return y ;
}

char askUser3() //询问用户需要的运算符
{
    char z {} ;
    std::cout << "输入一个运算符号：" ;
    
    std::cin >> z ;
    
    if (z != '+' && z != '-' && z != '*' && z != '/' )
    {
        std::cout << "输入的符号不正确，请重新输入！" ;
        return askUser3();
    }

    else
    {
        return z ;
    }
}

void compare() //调取函数，开始运算
{
    double a{askUser1()} , b{askUser2()};

    char  c{askUser3()} ;

    if (c == '+')
    {
        std::cout << a << " + " << b << " = " << a + b ;
    }
    
    else if (c == '-')
    {
        std::cout << a << " - " << b << " = " << a - b ;
    }

    else if (c == '*')
    {
        std::cout << a << " * " << b << " = " << a * b ;
    }

    else if (c == '/' && b == 0.0) //为避免数字 0 做除数的情况
    {
        std::cout << "不能除以 0 ,请重新输入！\n";
        compare() ;
        return ;
    }
    
    else 
    {
        std::cout << a << " / " << b << " = " << a / b ;
    }
}

int main() //程序开始，调用函数
{
    compare();

    return 0 ;
}