#include <iostream>

int add(int x, int y);  // needed so main know that add is a function declared elsewhere.

int main()
{
    std::cout << "The sum of 4 and 4 is: " << add(3, 4) << "\n";
}