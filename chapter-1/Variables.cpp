#include <iostream>

int main()
{
    int width;
    width = 5; // copy assignment of value 5 into variable width

    width = 7; // variable now has value 7

    int height = {6};  // direct brace intialization (preferred)


    std::cout<< height;
    std::cout << "\n";
    std::cout << width;
    std::cout << "\n";

    return 0;
}