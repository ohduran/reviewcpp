#include <iostream>
#include "approximatelyEqual.h"

int main()
{
    double a = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1; // almost 1

    std::cout << approximatelyEqual(a, 1.0, 1e-8) << std::endl; // true
    std::cout << approximatelyEqual(a - 1.0, 0.0, 1e-8) << std::endl;  // false??

    std::cout << approximatelyEqualAbsRel(a - 1.0, 0.0, 1e-12, 1e-8) << std::endl; // ok, true!

    return 0;
    
}