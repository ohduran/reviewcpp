/*
Write a program that asks the user to input an integer, and tells the user
whether the number is even or odd.
*/
#include <iostream>

bool isEven(int number){
    return (number % 2) == 0;
}

int main()
{
    std::cout << "Enter an integer: ";
    int number;
    std::cin >> number;

    if (isEven(number))
    {
        std::cout << number << " is even";
    }
    else
    {
        std::cout << number << " is odd";
    }

    std::cout << std::endl;

    return 0;
}