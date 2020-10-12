#include <iostream>

int main()
{
    int x = 5;
    int y = 5;

    std::cout << x << ' ' << y << std::endl;  // 5 5 
    std::cout << ++x << ' ' << --y << std::endl;  // 6 4
    std::cout << x << ' ' << y << std::endl;  // 6 4
    std::cout << x++ << ' ' << y-- << std::endl;  // 6 4
    std::cout << x << ' ' << y << std::endl;  // 7 3

    return 0;
    
    // BEST PRACTICE: Strong favor the prefix version (++x, --y) of the operator,
    // as they are generally more performant, and you're less likely to run strange issues.
}