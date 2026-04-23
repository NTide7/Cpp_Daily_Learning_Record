#include <iostream>  // 用于 std::cout 和 std::cin

int main()
{
    
    int x{} , y{} , z{};
    std::cout << "Enter three numbers: ";

    std::cin >> x;
    std::cin >> y;
    std::cin >> z;

    std::cout << "You entered " << x << "," << y << "," << z << '\n';
    return 0;
}