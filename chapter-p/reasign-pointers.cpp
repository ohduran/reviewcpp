#include <iostream>

int main()
{
    int value1 = 5;
    int value2 = 7;

    int *ptr;

    ptr = &value1;
    std::cout << *ptr << '\n';   // prints 5

    ptr = &value2;
    std::cout << *ptr << '\n';   // prints 7


    *ptr = 77;
    std::cout << value2 << '\n'; // prints 77!
    return 0;
}