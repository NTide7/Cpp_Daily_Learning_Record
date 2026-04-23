#include <iostream> // 用于输入输出
#include <string>

using namespace std;

int main()
{
    float length = 8;
    float width = 5;
    float perimeter = (length + width) * 2;
    float area = length * width;
    std::cout << "Length: " << length << endl;
    std::cout << "Width: " << width << endl;
    std::cout << "Perimeter: " << perimeter << endl;
    std::cout << "Area: " << area << endl;
    return 0;
}