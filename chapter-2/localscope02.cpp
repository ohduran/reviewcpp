#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;  // define your local variables as close to their first use as reasonable

    std::cout << "Enter another integer: ";
    int y;
    std::cin >> y;  // define your local variables as close to their first use as reasonable

    int sum = x + y;
    std::cout << "The sum is: " << sum << "\n";

    return 0;

}