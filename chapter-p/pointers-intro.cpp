#include <iostream>

int main()
{
    int x = 5;
    std::cout << x << '\n';     // print the variable of x
    std::cout << &x << '\n';    // print the memory address of variable x
    std::cout << *(&x) << '\n'; // print the value at memory address of address of variable x

    return 0;
}