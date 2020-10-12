#include <iostream>

int main()
{
    int x = 1;
    int y = 2;
    
    std::cout << (++x, ++y) << std::endl;  // increment x and y, evaluates to the right operand (shows 3)
    return 0;
}