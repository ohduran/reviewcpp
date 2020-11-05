#include <iostream>

int main()
{
    int value = 5;
    std::cout << &value << '\n';    // print the memoru address of value
    std::cout << value << '\n';     // print the value of value

    int *ptr = &value;
    std::cout << ptr << '\n';       // print the memory address stored in ptr
    std::cout << *ptr << '\n';      // print the value that ptr is pointing to
}