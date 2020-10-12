#include <iostream>

int main()
{
    bool inBigClassrom = false;

    const int classSize = inBigClassrom ? 30 : 20;

    std::cout << "The class size is " << classSize << std::endl;  // 20

    return 0;
}