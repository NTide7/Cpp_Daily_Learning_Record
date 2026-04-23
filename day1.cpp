#include <iostream> // 用于输入输出
#include <string>

using namespace std;

int main()
{
    char item[] = "apple"; // 商品名称
    int count = 4;         // 商品数量
    float price = 3.5;     // 商品单价

    float total = count * price; // 计算总价

    // 输出商品信息
    std::cout << "Item:" << item << endl;
    std::cout << "Count:" << count << endl;
    std::cout << "price:" << price << endl;
    std::cout << "Total" << total;

    return 0; // 程序正常结束
}
