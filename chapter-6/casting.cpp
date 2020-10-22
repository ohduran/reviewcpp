#include <iostream>

int main()
{
    int i1 = 10;
    int i2 = 4;

    float f = i1 / i2; // because 10 and 4 are both int, the expression is evaluated as int, then converted to float: 2.0
    std::cout << f << std::endl;

    float g = (float)i1 / i2;  // c-style casting to float (not preferred)
    std::cout << g << std::endl;

    float h = static_cast<float>(i1) / i2;  // casting with compile-time checking (harder to make errors)
    std::cout << h << std::endl;

    char c = static_cast<char>(48); // implicit conversion clear
    std::cout << c << std::endl;

    int i = 100;
    i = static_cast<int>(i / 2.5);  // explicit recasting as int
    std::cout << i << std::endl;


    return 0;
}