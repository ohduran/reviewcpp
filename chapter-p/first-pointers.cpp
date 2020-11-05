#include <iostream>

int main()
{
    int v = 5;
    int *ptr = &v;

    std::cout << &v << '\n';    // print the address of variable x
    std::cout << ptr << '\n';   // print the address that ptr is holding

    return 0;
}