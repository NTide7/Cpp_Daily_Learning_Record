#include <iostream> // 用于输入输出
#include <string>
//用于计算用户购买的商品总价并列出所有信息
    int main()
    {
        std::string item{};//定义类型
        float price{} , total{};//单价，总价类型
        int count{};

        std::cout <<"你购买的商品名称是？ \n";
        std::cin >> item;//把用户输入的内容输入进变量

        std::cout <<"购买的商品单价是？ \n";
        std::cin >> price;

        std::cout <<"你购买了多少个? " << item << "?" << '\n';
        std::cin >> count ;
        
        total = count * price;
        std::cout << "商品名： " << item << '\n';
        std::cout << "单价: " << price << '\n';
        std::cout << "数量: " << count <<'\n';
        std::cout << "总价: " << total;
//输出所有信息
        return 0;
    }