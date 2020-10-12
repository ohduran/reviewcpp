#include <iomanip>

#include <iostream>

int main()
{
    double d = 0.1;

    std::cout << d << "\n";

    std::cout << std::setprecision(17);
    std::cout << d << "\n";

    // 0.1 + 10 != 1
    double d2 = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;

    std::cout << d2 << "\n";

    return 0;
}